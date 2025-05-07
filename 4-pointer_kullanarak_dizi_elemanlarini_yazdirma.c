/*
    POINTER KULLANARAK DÝZÝ ELEMANLARINI EKRANA YAZDIRMA

    Bu örnekte:
    - 5 elemanlý bir tamsayý dizisi (n[]) tanýmlanýr ve baþlangýç deðerleri atanýr.
    - Bir pointer (nptr), dizinin ilk elemanýnýn adresine iþaret edecek þekilde tanýmlanýr.
    - Pointer aritmetiði kullanýlarak dizinin tüm elemanlarýna eriþilir ve ekrana yazdýrýlýr.
    
*/
#include <stdio.h>
int main() {
    int n[5] = {1, 2, 3, 4, 5};   // 5 elemanlý tamsayý dizisi tanýmlanýyor
    int *nptr;                   // Bir pointer tanýmlanýyor

    nptr = &n[0];                // Pointer, dizinin ilk elemanýný iþaret ediyor

    // Pointer aritmetiði kullanarak dizi elemanlarýna eriþim saðlanýyor
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(nptr + i));  // nptr + i adresindeki deðeri yazdýr
    }

    return 0;   // Program baþarýyla sona erdi
}

