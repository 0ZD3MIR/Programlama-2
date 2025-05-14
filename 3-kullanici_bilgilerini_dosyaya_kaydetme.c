#include <stdio.h>
#include <stdlib.h>

/*
    KULLANICI B�LG�LER�N� DOSYAYA KAYDETME PROGRAMI

    Bu program:
    1. Kullan�c�dan isim ve ya� bilgilerini al�r
    2. Bu bilgileri "kullanici_bilgileri.txt" dosyas�na ekler
    3. Kayd�n ba�ar�l� oldu�unu kullan�c�ya bildirir

    �ZELL�KLER:
    - "a" (append) modu kullan�ld��� i�in her �al��mada yeni kay�t eklenir
    - �nceki kay�tlar silinmez
    - Kullan�c� dostu mesajlar i�erir
*/
int main() {
    FILE *dyaz;
    char isim[50];
    int yas;

    // Kullan�c�dan isim ve ya� bilgilerini al
    printf("Lutfen isminizi giriniz: ");
    scanf("%s", isim);

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);

    // Dosyay� ekleme modunda a�
    dyaz = fopen("kullanici_bilgileri.txt", "a");

    // Kullan�c� bilgilerini dosyaya yaz
    fprintf(dyaz, "isim: %s, Yas: %d\n", isim, yas);

    // Dosyay� kapat
    fclose(dyaz);

    printf("Bilgileriniz basariyla kaydedildi.\n");

    return 0;
}
