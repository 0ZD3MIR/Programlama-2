/*
    POINTER KULLANARAK D�Z� ELEMANLARINI DE���T�RME

    Bu �rnekte:
    - 5 elemanl� bir tamsay� dizisi (n[]) tan�mlan�r ve ba�lang�� de�erleri atan�r.
    - Bir pointer (nptr), dizinin ilk eleman�n�n adresine i�aret edecek �ekilde tan�mlan�r.
    - Pointer aritmeti�i kullan�larak dizinin t�m elemanlar�na eri�ilir ve her bir eleman 100 artt�r�l�r.
    - De�i�tirilen dizi elemanlar� ekrana yazd�r�l�r.

*/

#include <stdio.h>

// Fonksiyon prototipi: Bir tamsay� dizisinin elemanlar�n� pointer kullanarak de�i�tiren fonksiyon
void screen(int *p, int n);

int main() {
    // 5 elemanl� bir tamsay� dizisi tan�mlan�r ve ba�lang�� de�erleri atan�r
    int n[5] = {1, 2, 3, 4, 5};

    // Pointer tan�mlan�r ve dizinin ilk eleman�n�n adresine i�aret eder
    int *nptr = n; // Alternatif olarak: int *nptr = &n[0];

    // 'screen' fonksiyonu �a�r�l�r; dizinin elemanlar� pointer kullan�larak 100 artt�r�l�r
    screen(nptr, 5);

    // De�i�tirilen dizi elemanlar� ekrana yazd�r�l�r
    printf("Dizi:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}

// 'screen' fonksiyonu: Pointer kullanarak dizi elemanlar�n� 100 artt�r�r
void screen(int *p, int n) {
    for (int i = 0; i < n; i++) {
        *(p + i) = *(p + i) + 100; // Pointer aritmeti�i ile dizi eleman�na eri�im ve de�erini artt�rma
    }
}


