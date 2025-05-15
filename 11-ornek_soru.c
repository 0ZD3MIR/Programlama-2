#include <stdio.h>  

/*
    ��RENC� NOT HESAPLAMA PROGRAMI

    Bu program:
    1. "ogrenoi.txt" dosyas�ndan ��renci bilgilerini okur (ad, 2 ara s�nav, final notu)
    2. D�nem sonu notunu hesaplar (ara s�navlar %25, final %50 etkili)
    3. Hesaplanan notlar� "notlar.txt" dosyas�na yazar
    4. �rnek ��kt�da g�sterilen format� kullan�r

    HESAPLAMA FORM�L�:
    D�nem Notu = (1. Ara S�nav * 0.25) + (2. Ara S�nav * 0.25) + (Final * 0.5)
*/

int main(void)  
{ 
    int mt1, mt2, final, donemNotu;  
    char ad[30];  
    FILE *dosyaOku;  
    FILE *dosyaYaz;  
    
    // Dosyalar� a�ma i�lemleri
    dosyaOku = fopen("ogrenoi.txt","r");  // Okuma modunda a�
    dosyaYaz = fopen("notlar.txt","w");   // Yazma modunda a�
    
    // Dosyadan verileri oku ve i�le
    while (fscanf(dosyaOku,"%s %d %d %d\n",ad,&mt1,&mt2,&final) != EOF)  
    { 
        // Not hesaplama
        donemNotu = (mt1 *0.25)+(mt2*0.25)+(final*0.5);  
        
        // Sonucu dosyaya yaz
        fprintf(dosyaYaz,"%s: %d\n", ad, donemNotu);  
    }  
    
    // Dosyalar� kapat
    fclose(dosyaOku);  
    fclose(dosyaYaz);  
    
    return(0);  
}

/*
    �RNEK �IKTI:
    Osman: 73
    Veli: 62
    Aysu: 77
    Sukran: 69
    Muhittin: 84

    PROGRAMIN �ALI�MASI ���N:
    1. "ogrenoi.txt" dosyas� a�a��daki formatta haz�r olmal�:
       Osman 70 80 72
       Veli 60 65 60
       Aysu 80 75 75
       Sukran 70 70 68
       Muhittin 90 80 80
    2. Program �al��t�r�ld���nda "notlar.txt" olu�turulacak
    3. ��kt� dosyas� �rnekteki gibi olacak

    D�KKAT ED�LMES� GEREKENLER:
    - "ogrenoi.txt" dosyas� programla ayn� dizinde olmal�
    - Dosya okuma modu "r" olarak ayarlanmal� (orijinal kodda "x" yanl��)
    - ��renci adlar�nda bo�luk olmamal�
*/
