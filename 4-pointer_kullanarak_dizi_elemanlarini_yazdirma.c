/*
    POINTER KULLANARAK D�Z� ELEMANLARINI EKRANA YAZDIRMA

    Bu �rnekte:
    - 5 elemanl� bir tamsay� dizisi (n[]) tan�mlan�r ve ba�lang�� de�erleri atan�r.
    - Bir pointer (nptr), dizinin ilk eleman�n�n adresine i�aret edecek �ekilde tan�mlan�r.
    - Pointer aritmeti�i kullan�larak dizinin t�m elemanlar�na eri�ilir ve ekrana yazd�r�l�r.
    
*/
#include <stdio.h>
int main() {
    int n[5] = {1, 2, 3, 4, 5};   // 5 elemanl� tamsay� dizisi tan�mlan�yor
    int *nptr;                   // Bir pointer tan�mlan�yor

    nptr = &n[0];                // Pointer, dizinin ilk eleman�n� i�aret ediyor

    // Pointer aritmeti�i kullanarak dizi elemanlar�na eri�im sa�lan�yor
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(nptr + i));  // nptr + i adresindeki de�eri yazd�r
    }

    return 0;   // Program ba�ar�yla sona erdi
}

