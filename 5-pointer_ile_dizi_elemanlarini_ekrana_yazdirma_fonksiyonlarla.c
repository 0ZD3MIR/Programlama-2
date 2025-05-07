/*
    POINTER ÝLE DÝZÝ ELEMANLARINI EKRANA YAZDIRAN FONKSÝYON

    Bu örnekte:
    - 5 elemanlý bir tamsayý dizisi (n[]) tanýmlanýr ve baþlangýç deðerleri atanýr.
    - Fonksiyon aracýlýðýyla dizinin tüm elemanlarý pointer kullanýlarak ekrana yazdýrýlýr.
    - !!! ÖNEMLÝ NOT !!! Bu iþlem orijinal diziyi deðiþtirmez
    
    Fonksiyonun çalýþma prensibi:
    ---------------------------
    1. 'screen' fonksiyonu, bir pointer ve dizinin eleman sayýsýný parametre olarak alýr.
    2. Pointer, dizinin baþlangýç adresine iþaret eder ve pointer aritmetiði kullanýlarak dizinin her elemanýna ulaþýlýr.
    3. Dizinin her bir elemanýnýn adresi `*(p + i)` ifadesi ile dereference edilip ekrana yazdýrýlýr.
    
*/
#include <stdio.h>
void screen(int *p, int n) {
    // Pointer aritmetiði kullanýlarak dizinin her bir elemaný ekrana yazdýrýlýr
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));   // p+i adresindeki deðeri yazdýr
    }
    printf("\n");   // Satýr sonu
}

int main() {
    int n[5] = {1, 2, 3, 4, 5};  // 5 elemanlý tamsayý dizisi tanýmlanýyor
    int *nptr;                    // Pointer tanýmlanýyor
    
    // 'screen' fonksiyonuna dizinin baþlangýç adresi ve eleman sayýsý gönderiliyor
    screen(&n[0], 5);

    return 0;   // Program baþarýyla sona erdi
}

