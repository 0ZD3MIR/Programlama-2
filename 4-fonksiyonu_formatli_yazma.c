#include <stdio.h>

/*
    DOSYA OKUMA VE YAZMA ÖRNEÐÝ (fprintf KULLANIMI)

    Bu program:
    1. Belirtilen dosyadan öðrenci adý ve numarasýný okur
    2. Bu bilgileri ters sýrada (numara-ad) baþka bir dosyaya yazar
    3. fprintf fonksiyonunun kullanýmýný gösterir

    fprintf FONKSÝYONU:
    - Dosyaya formatlý veri yazmak için kullanýlýr
    - printf ile ayný formatta çalýþýr, ancak çýktýyý dosyaya yazar
    - Syntax: fprintf(dosya_pointeri, format, degiskenler);
*/

int main() 
{
    // Dosya yollarýný tanýmla
    char okubosyaAdd[] = "o:/dosya_oku.txt";
    char yazDosyaAdd[] = "o:/dosya_yaz.txt";
    
    // Deðiþkenleri tanýmla
    char ad[30];
    int no;
    
    // Dosya pointer'larý
    FILE *yfp, *ofp;
    
    // Okuma dosyasýný aç
    ofp = fopen(okubosyaAdd,"r");
    
    // Dosyadan verileri oku (ad ve no)
    fscanf(ofp,"%s %d",ad,&no);
    
    // Yazma dosyasýný aç
    yfp = fopen(yazDosyaAdd,"w");
    
    // Verileri ters sýrada dosyaya yaz
    fprintf(yfp,"%d %s\n",no, ad);
    
    // Dosyalarý kapat
    fclose(ofp);
    fclose(yfp);
    
    return 0;
}

/*
    ÖRNEK ÇALIÞMA:
    
    GÝRDÝ DOSYASI (dosya_oku.txt):
    Ahmet 1453
    
    ÇIKTI DOSYASI (dosya_yaz.txt):
    1453 Ahmet

    AÇIKLAMALAR:
    1. Program "o:/dosya_oku.txt" dosyasýndan veri okur
    2. Okunan verileri "o:/dosya_yaz.txt" dosyasýna ters sýrada yazar
    3. fprintf ile formatlý yazma iþlemi yapýlýr
    4. Son olarak dosyalar kapatýlýr

    DÝKKAT EDÝLMESÝ GEREKENLER:
    - Okuma dosyasýnýn var olmasý gerekir
    - Yazma dosyasý yoksa oluþturulur, varsa üzerine yazýlýr
    - Dosya yollarý doðru þekilde belirtilmelidir
    - fclose ile dosyalar mutlaka kapatýlmalýdýr
*/

/*
    FONKSÝYON AÇIKLAMALARI:
    
    fopen(): Dosya açma fonksiyonu
    - "r": Okuma modu (dosya must exist)
    - "w": Yazma modu (dosya yoksa oluþturur, varsa siler)
    
    fscanf(): Dosyadan formatlý okuma yapar
    fprintf(): Dosyaya formatlý yazma yapar
    fclose(): Açýk dosyayý kapatýr
*/
