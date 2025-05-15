#include <stdio.h>
#include <stdlib.h>

/*

    N TANE KULLANICI BÝLGÝSÝNÝ OKUYAN VE DOSYAYA YAZIP OKUYAN PROGRAM

    Bu program:
    1. Kullanýcýdan kaç kiþi bilgisi girileceðini (n) alýr
    2. Her kiþi için ad ve yaþ bilgilerini alýr
    3. Bilgileri bir dosyaya yazar
    4. Dosyayý tekrar okuyarak girilen verileri ekrana yazdýrýr

*/

int main() {
    char ad[50];     // Ýsim bilgisi için karakter dizisi
    int yas;         // Yaþ bilgisi
    int n;           // Kaç kiþi için bilgi girilecek
    FILE *dosya;

    // Kullanýcýdan kaç kayýt alýnacaðýný sor
    printf("Kaç kiþi için bilgi girilecek? ");
    scanf("%d", &n);

    // Dosyayý yazma modunda aç
    dosya = fopen("veriler.txt", "w");

    if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 1;
    }

    // n defa ad ve yaþ bilgisi al, dosyaya yaz
    for (int i = 0; i < n; i++) {
        printf("%d. Kiþinin Adý ve Yaþý: ", i + 1);
        scanf("%s %d", ad, &yas);
        fprintf(dosya, "%s %d\n", ad, yas);
    }

    fclose(dosya); // Dosyayý kapat

    // Dosyayý okuma modunda aç
    dosya = fopen("veriler.txt", "r");


    printf("\n--- Dosyadaki Kayýtlar ---\n");

    // Satýr satýr dosyayý oku ve ekrana yaz
    while (fgets(ad, sizeof(ad), dosya) != NULL) {
        printf("%s", ad); // fgets zaten \n içerdiði için \n eklemeye gerek yok
    }

    fclose(dosya); // Dosyayý kapat

    return 0;
}

/*

    PROGRAMIN ÇALIÞMA MANTIÐI:
    1. Kullanýcýdan kaç kiþi bilgisi alýnacaðý (n) istenir
    2. Her kiþi için ad ve yaþ bilgisi alýnýr ve dosyaya yazýlýr
    3. Dosya okuma modunda tekrar açýlýr
    4. Tüm satýrlar okunarak ekrana yazdýrýlýr


*/

