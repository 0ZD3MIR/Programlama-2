/*
    POINTER KULLANARAK DÝZÝ ELEMANLARINI DEÐÝÞTÝRME

    Bu örnekte:
    - 5 elemanlý bir tamsayý dizisi (n[]) tanýmlanýr ve baþlangýç deðerleri atanýr.
    - Bir pointer (nptr), dizinin ilk elemanýnýn adresine iþaret edecek þekilde tanýmlanýr.
    - Pointer aritmetiði kullanýlarak dizinin tüm elemanlarýna eriþilir ve her bir eleman 100 arttýrýlýr.
    - Deðiþtirilen dizi elemanlarý ekrana yazdýrýlýr.

*/

#include <stdio.h>

// Fonksiyon prototipi: Bir tamsayý dizisinin elemanlarýný pointer kullanarak deðiþtiren fonksiyon
void screen(int *p, int n);

int main() {
    // 5 elemanlý bir tamsayý dizisi tanýmlanýr ve baþlangýç deðerleri atanýr
    int n[5] = {1, 2, 3, 4, 5};

    // Pointer tanýmlanýr ve dizinin ilk elemanýnýn adresine iþaret eder
    int *nptr = n; // Alternatif olarak: int *nptr = &n[0];

    // 'screen' fonksiyonu çaðrýlýr; dizinin elemanlarý pointer kullanýlarak 100 arttýrýlýr
    screen(nptr, 5);

    // Deðiþtirilen dizi elemanlarý ekrana yazdýrýlýr
    printf("Dizi:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}

// 'screen' fonksiyonu: Pointer kullanarak dizi elemanlarýný 100 arttýrýr
void screen(int *p, int n) {
    for (int i = 0; i < n; i++) {
        *(p + i) = *(p + i) + 100; // Pointer aritmetiði ile dizi elemanýna eriþim ve deðerini arttýrma
    }
}


