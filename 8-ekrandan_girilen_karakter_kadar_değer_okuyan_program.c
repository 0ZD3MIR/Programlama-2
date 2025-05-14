#include <stdio.h>

/*

    EKRANDAN G�R�LEN KARAKTER KADAR DE�ER OKUYAN PROGRAM

    Bu program:
    1. Kullan�c�dan 5 kez ad ve ya� bilgisi almak istiyoruz(�rne�in)
    2. Bu bilgileri bir dosyaya yazar
    3. Daha sonra dosyay� sat�r sat�r okuyarak ekrana yazd�r�r
    4. Basit dosya yazma ve okuma i�lemlerini �rnekler

*/

int main() {
    char ad[25];   // �sim veya sat�r verisi i�in karakter dizisi
    int yas;       // Ya� bilgisi

    FILE *dyaz;

    // Dosyay� yazma modunda a�
    dyaz = fopen("text.txt", "w");

    // 5 kez kullan�c�dan ad ve ya� al, dosyaya yaz
    for (int i = 0; i < 5; i++) {
        printf("Ad ve Yas: ");
        scanf("%s %d", ad, &yas);                  // Kullan�c�dan veri al
        fprintf(dyaz, "%s %d\n", ad, yas);         // Dosyaya yaz
    }

    // Dosyay� kapat
    fclose(dyaz);

    // Dosyay� okuma modunda a�
    dyaz = fopen("text.txt", "r");

    // Dosyadan 5 sat�r oku ve ekrana yazd�r
    for (int i = 0; i < 5; i++) {
        fgets(ad, 25, dyaz);        // Her sat�r� ad[] i�ine al
        printf("%s\n", ad);         // Ekrana yaz
    }

    return 0;
}

/*

    PROGRAMIN �ALI�MA MANTI�I:
    1. Kullan�c�dan 5 kez ad ve ya� bilgisi al�n�r
    2. Her giri� bir sat�ra yaz�larak dosyada saklan�r
    3. Dosya tekrar a��larak 5 sat�r okunur
    4. Okunan sat�rlar ekrana yazd�r�l�r

*/

