#include <stdio.h>

/*
    DOSYA OKUMA VE YAZMA �RNE�� (fprintf KULLANIMI)

    Bu program:
    1. Belirtilen dosyadan ��renci ad� ve numaras�n� okur
    2. Bu bilgileri ters s�rada (numara-ad) ba�ka bir dosyaya yazar
    3. fprintf fonksiyonunun kullan�m�n� g�sterir

    fprintf FONKS�YONU:
    - Dosyaya formatl� veri yazmak i�in kullan�l�r
    - printf ile ayn� formatta �al���r, ancak ��kt�y� dosyaya yazar
    - Syntax: fprintf(dosya_pointeri, format, degiskenler);
*/

int main() 
{
    // Dosya yollar�n� tan�mla
    char okubosyaAdd[] = "o:/dosya_oku.txt";
    char yazDosyaAdd[] = "o:/dosya_yaz.txt";
    
    // De�i�kenleri tan�mla
    char ad[30];
    int no;
    
    // Dosya pointer'lar�
    FILE *yfp, *ofp;
    
    // Okuma dosyas�n� a�
    ofp = fopen(okubosyaAdd,"r");
    
    // Dosyadan verileri oku (ad ve no)
    fscanf(ofp,"%s %d",ad,&no);
    
    // Yazma dosyas�n� a�
    yfp = fopen(yazDosyaAdd,"w");
    
    // Verileri ters s�rada dosyaya yaz
    fprintf(yfp,"%d %s\n",no, ad);
    
    // Dosyalar� kapat
    fclose(ofp);
    fclose(yfp);
    
    return 0;
}

/*
    �RNEK �ALI�MA:
    
    G�RD� DOSYASI (dosya_oku.txt):
    Ahmet 1453
    
    �IKTI DOSYASI (dosya_yaz.txt):
    1453 Ahmet

    A�IKLAMALAR:
    1. Program "o:/dosya_oku.txt" dosyas�ndan veri okur
    2. Okunan verileri "o:/dosya_yaz.txt" dosyas�na ters s�rada yazar
    3. fprintf ile formatl� yazma i�lemi yap�l�r
    4. Son olarak dosyalar kapat�l�r

    D�KKAT ED�LMES� GEREKENLER:
    - Okuma dosyas�n�n var olmas� gerekir
    - Yazma dosyas� yoksa olu�turulur, varsa �zerine yaz�l�r
    - Dosya yollar� do�ru �ekilde belirtilmelidir
    - fclose ile dosyalar mutlaka kapat�lmal�d�r
*/

/*
    FONKS�YON A�IKLAMALARI:
    
    fopen(): Dosya a�ma fonksiyonu
    - "r": Okuma modu (dosya must exist)
    - "w": Yazma modu (dosya yoksa olu�turur, varsa siler)
    
    fscanf(): Dosyadan formatl� okuma yapar
    fprintf(): Dosyaya formatl� yazma yapar
    fclose(): A��k dosyay� kapat�r
*/
