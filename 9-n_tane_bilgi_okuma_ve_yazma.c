#include <stdio.h>
#include <stdlib.h>

/*

    N TANE KULLANICI B�LG�S�N� OKUYAN VE DOSYAYA YAZIP OKUYAN PROGRAM

    Bu program:
    1. Kullan�c�dan ka� ki�i bilgisi girilece�ini (n) al�r
    2. Her ki�i i�in ad ve ya� bilgilerini al�r
    3. Bilgileri bir dosyaya yazar
    4. Dosyay� tekrar okuyarak girilen verileri ekrana yazd�r�r

*/

int main() {
    char ad[50];     // �sim bilgisi i�in karakter dizisi
    int yas;         // Ya� bilgisi
    int n;           // Ka� ki�i i�in bilgi girilecek
    FILE *dosya;

    // Kullan�c�dan ka� kay�t al�naca��n� sor
    printf("Ka� ki�i i�in bilgi girilecek? ");
    scanf("%d", &n);

    // Dosyay� yazma modunda a�
    dosya = fopen("veriler.txt", "w");

    if (dosya == NULL) {
        printf("Dosya a��lamad�!\n");
        return 1;
    }

    // n defa ad ve ya� bilgisi al, dosyaya yaz
    for (int i = 0; i < n; i++) {
        printf("%d. Ki�inin Ad� ve Ya��: ", i + 1);
        scanf("%s %d", ad, &yas);
        fprintf(dosya, "%s %d\n", ad, yas);
    }

    fclose(dosya); // Dosyay� kapat

    // Dosyay� okuma modunda a�
    dosya = fopen("veriler.txt", "r");


    printf("\n--- Dosyadaki Kay�tlar ---\n");

    // Sat�r sat�r dosyay� oku ve ekrana yaz
    while (fgets(ad, sizeof(ad), dosya) != NULL) {
        printf("%s", ad); // fgets zaten \n i�erdi�i i�in \n eklemeye gerek yok
    }

    fclose(dosya); // Dosyay� kapat

    return 0;
}

/*

    PROGRAMIN �ALI�MA MANTI�I:
    1. Kullan�c�dan ka� ki�i bilgisi al�naca�� (n) istenir
    2. Her ki�i i�in ad ve ya� bilgisi al�n�r ve dosyaya yaz�l�r
    3. Dosya okuma modunda tekrar a��l�r
    4. T�m sat�rlar okunarak ekrana yazd�r�l�r


*/

