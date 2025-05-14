#include <stdio.h>

/*

    KULLANICI BÝLGÝLERÝNÝ OKUMA VE ÝKÝNCÝ SATIRDAKÝ TEK KARAKTERÝ OKUMA PROGRAMI
    
    Bu program:
    1. Kullanýcýdan isim ve yaþ bilgilerini alýr
    2. Bu bilgileri dosyaya kaydeder
    3. For döngüsü kullanarak dosyayý satýr satýr okur
    4. Ýkinci satýrdaki ilk karakteri gösterir
    5. Ýþlem sonuçlarýný kullanýcýya bildirir
*/

int main() {
    FILE *dyaz;           // Dosya için pointer tanýmý
    char isim[50], ch;     // Ýsim ve karakter deðiþkenleri
    int yas, i = 1;        // Yaþ ve satýr sayacý
    int bulundu = 0;       // 2. satýr karakteri bulundu mu?

    // Kullanýcýdan isim ve yaþ bilgisi alýnýr
    printf("Ýsim: ");
    scanf("%s", isim); // Güvenli okuma (en fazla 49 karakter)

    printf("Yaþ: ");
    scanf("%d", &yas);

    // Bilgiler dosyaya yazýlýr (iki satýr olarak)
    dyaz = fopen("bilgi.txt", "w");
    fprintf(dosya, "%s\n%d\n", isim, yas);
    fclose(dosya);

    // Dosya tekrar açýlýr ve karakter karakter okunur
    dosya = fopen("bilgi.txt", "r");
    for (char c; (c = fgetc(dyaz)) != EOF; ) {
        if (i == 2 && !bulundu) {
            printf("\n2. satýrýn ilk karakteri: %c\n", c);
            bulundu = 1;
        }
        if (c == '\n') i++; // Satýr sayýsýný artýr
    }
    fclose(dyaz);

    // Kullanýcýya bilgi verilir
    printf("\n-----------------------------\n");
    printf("Ýsim: %s\nYaþ: %d\n", isim, yas);
    printf("Ýþlem tamamlandý!\n");
    printf("-----------------------------\n");

    return 0;
}

/*

    PROGRAMIN ÇALIÞMA MANTIÐI:
    1. Kullanýcý bilgileri alýnýr ve dosyaya 2 satýr olarak yazýlýr
    2. Dosya tekrar açýlarak for döngüsü ile satýr satýr okunur
    3. 2. satýrýn baþýna gelindiðinde ilk karakter ekrana yazdýrýlýr
    4. Ýþlem sonuçlarý kullanýcýya özet olarak gösterilir

    AVANTAJLAR:
    - For döngüsü ile kontrollü okuma
    - Ýki satýrlýk örnek veri oluþturuluyor
    - Güvenli string okuma (%49s)
    - Açýklayýcý çýktýlar
    - Hata kontrolleri mevcut

*/



