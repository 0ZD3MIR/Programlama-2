#include <stdio.h>  

/*
    ÖÐRENCÝ NOT HESAPLAMA PROGRAMI

    Bu program:
    1. "ogrenoi.txt" dosyasýndan öðrenci bilgilerini okur (ad, 2 ara sýnav, final notu)
    2. Dönem sonu notunu hesaplar (ara sýnavlar %25, final %50 etkili)
    3. Hesaplanan notlarý "notlar.txt" dosyasýna yazar
    4. Örnek çýktýda gösterilen formatý kullanýr

    HESAPLAMA FORMÜLÜ:
    Dönem Notu = (1. Ara Sýnav * 0.25) + (2. Ara Sýnav * 0.25) + (Final * 0.5)
*/

int main(void)  
{ 
    int mt1, mt2, final, donemNotu;  
    char ad[30];  
    FILE *dosyaOku;  
    FILE *dosyaYaz;  
    
    // Dosyalarý açma iþlemleri
    dosyaOku = fopen("ogrenoi.txt","r");  // Okuma modunda aç
    dosyaYaz = fopen("notlar.txt","w");   // Yazma modunda aç
    
    // Dosyadan verileri oku ve iþle
    while (fscanf(dosyaOku,"%s %d %d %d\n",ad,&mt1,&mt2,&final) != EOF)  
    { 
        // Not hesaplama
        donemNotu = (mt1 *0.25)+(mt2*0.25)+(final*0.5);  
        
        // Sonucu dosyaya yaz
        fprintf(dosyaYaz,"%s: %d\n", ad, donemNotu);  
    }  
    
    // Dosyalarý kapat
    fclose(dosyaOku);  
    fclose(dosyaYaz);  
    
    return(0);  
}

/*
    ÖRNEK ÇIKTI:
    Osman: 73
    Veli: 62
    Aysu: 77
    Sukran: 69
    Muhittin: 84

    PROGRAMIN ÇALIÞMASI ÝÇÝN:
    1. "ogrenoi.txt" dosyasý aþaðýdaki formatta hazýr olmalý:
       Osman 70 80 72
       Veli 60 65 60
       Aysu 80 75 75
       Sukran 70 70 68
       Muhittin 90 80 80
    2. Program çalýþtýrýldýðýnda "notlar.txt" oluþturulacak
    3. Çýktý dosyasý örnekteki gibi olacak

    DÝKKAT EDÝLMESÝ GEREKENLER:
    - "ogrenoi.txt" dosyasý programla ayný dizinde olmalý
    - Dosya okuma modu "r" olarak ayarlanmalý (orijinal kodda "x" yanlýþ)
    - Öðrenci adlarýnda boþluk olmamalý
*/
