#include <stdio.h>
#include <stdlib.h>

/*
    KULLANICI BÝLGÝLERÝNÝ DOSYAYA KAYDETME PROGRAMI

    Bu program:
    1. Kullanýcýdan isim ve yaþ bilgilerini alýr
    2. Bu bilgileri "kullanici_bilgileri.txt" dosyasýna ekler
    3. Kaydýn baþarýlý olduðunu kullanýcýya bildirir

    ÖZELLÝKLER:
    - "a" (append) modu kullanýldýðý için her çalýþmada yeni kayýt eklenir
    - Önceki kayýtlar silinmez
    - Kullanýcý dostu mesajlar içerir
*/
int main() {
    FILE *dyaz;
    char isim[50];
    int yas;

    // Kullanýcýdan isim ve yaþ bilgilerini al
    printf("Lutfen isminizi giriniz: ");
    scanf("%s", isim);

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);

    // Dosyayý ekleme modunda aç
    dyaz = fopen("kullanici_bilgileri.txt", "a");

    // Kullanýcý bilgilerini dosyaya yaz
    fprintf(dyaz, "isim: %s, Yas: %d\n", isim, yas);

    // Dosyayý kapat
    fclose(dyaz);

    printf("Bilgileriniz basariyla kaydedildi.\n");

    return 0;
}
