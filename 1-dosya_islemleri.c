#include<stdlib.h>
#include<stdio.h>

/*
    DOSYA ÝÞLEMLERÝ - TEMEL KAVRAMLAR

    Dosya iþlemleri, verilerin kalýcý olarak saklanmasý için kullanýlýr.
    Temel dosya iþlemleri þunlardýr:
    1. Dosya açma (fopen)
    2. Dosyaya yazma/okuma (fprintf, fscanf, fgets, fputs vb.)
    3. Dosya kapatma (fclose)

    DOSYA AÇMA MODLARI:
    -------------------
    | Mod | Açýklama                                |
    |-----|-----------------------------------------|
    | "r" | Sadece okuma (dosya yoksa hata verir)   |
    | "w" | Yazma (dosya yoksa oluþturur, varsa SÝLER) |
    | "a" | Ekleme (dosya yoksa oluþturur, varsa sonuna ekler) |
    | "r+"| Okuma ve yazma (dosya yoksa hata verir)  |
    | "w+"| Okuma ve yazma (dosya yoksa oluþturur, varsa SÝLER) |
    | "a+"| Okuma ve ekleme (dosya yoksa oluþturur)  |

    ÖNEMLÝ NOTLAR:
    - Dosya iþlemleri yaparken mutlaka hata kontrolü yapýlmalýdýr.
    - Açýlan her dosya mutlaka kapatýlmalýdýr.
    - "w" ve "w+" modlarý DÝKKATLÝ kullanýlmalýdýr, çünkü varolan dosyanýn içeriðini siler!
*/

int main() {
    FILE *dyaz; // Dosya pointer'ý 
    // derste dyaz isimli bir klasör oluþturduk ve tüm programlarýný onun içinde yaptýk 
    // o yüzden bunu pointer yaptýk
    
    /* 
       Dosyayý yazma modunda açma ("w" modu)
       - "ornek.txt" adýnda dosya oluþturulacak
       - Dosya zaten varsa ÝÇERÝÐÝ TAMAMEN SÝLÝNECEK
       - Dosya yoksa yeni oluþturulacak
    */
    dyaz = fopen("ornek.txt", "w");
    
    // Dosyaya yazma iþlemi
    fprintf(dyaz, "Bu bir deneme yazýsýdýr.\n");
    fprintf(dyaz, "Dosya iþlemleri öðreniyorum.\n");
    
    // Ekrana yazdýrma
    printf("Dosyaya yazý yazýldý.\n");
    
    // Dosyayý kapatma
    fclose(dyaz);
    
    return 0; // Programýn baþarýyla sonlandýðýný belirt
}

/*
    BU KODUN ÇALIÞMA MANTIÐI:
    1. "ornek.txt" adýnda bir dosya oluþturulur (veya varsa içeriði silinir)
    2. Dosyaya iki satýrlýk metin yazýlýr
    3. Ekrana bilgi mesajý yazdýrýlýr
    4. Dosya kapatýlarak kayýt iþlemi tamamlanýr
    
*/
