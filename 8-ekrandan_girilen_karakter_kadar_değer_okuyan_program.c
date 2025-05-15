#include <stdio.h>

/*

    EKRANDAN GÝRÝLEN KARAKTER KADAR DEÐER OKUYAN PROGRAM

    Bu program:
    1. Kullanýcýdan 5 kez ad ve yaþ bilgisi almak istiyoruz(örneðin)
    2. Bu bilgileri bir dosyaya yazar
    3. Daha sonra dosyayý satýr satýr okuyarak ekrana yazdýrýr
    4. Basit dosya yazma ve okuma iþlemlerini örnekler

*/

int main() {
    char ad[25];   // Ýsim veya satýr verisi için karakter dizisi
    int yas;       // Yaþ bilgisi

    FILE *dyaz;

    // Dosyayý yazma modunda aç
    dyaz = fopen("text.txt", "w");

    // 5 kez kullanýcýdan ad ve yaþ al, dosyaya yaz
    for (int i = 0; i < 5; i++) {
        printf("Ad ve Yas: ");
        scanf("%s %d", ad, &yas);                  // Kullanýcýdan veri al
        fprintf(dyaz, "%s %d\n", ad, yas);         // Dosyaya yaz
    }

    // Dosyayý kapat
    fclose(dyaz);

    // Dosyayý okuma modunda aç
    dyaz = fopen("text.txt", "r");

    // Dosyadan 5 satýr oku ve ekrana yazdýr
    for (int i = 0; i < 5; i++) {
        fgets(ad, 25, dyaz);        // Her satýrý ad[] içine al
        printf("%s\n", ad);         // Ekrana yaz
    }

    return 0;
}

/*

    PROGRAMIN ÇALIÞMA MANTIÐI:
    1. Kullanýcýdan 5 kez ad ve yaþ bilgisi alýnýr
    2. Her giriþ bir satýra yazýlarak dosyada saklanýr
    3. Dosya tekrar açýlarak 5 satýr okunur
    4. Okunan satýrlar ekrana yazdýrýlýr

*/

