/*
    ÝKÝ FARKLI DEÐÝÞKENÝ POINTER (GÖSTERÝCÝ) KULLANARAK TOPLAYAN PROGRAM

    Bu örnekte:
    - Ýki adet tamsayý deðiþkeni (x ve y) tanýmlanýr.
    - Her bir deðiþken için birer pointer (xptr ve yptr) tanýmlanýr.
    - Pointer'lar bu deðiþkenlerin adreslerine atanýr.
    - Pointer'lar kullanýlarak bu iki deðiþkenin deðeri toplanýr ve ekrana yazdýrýlýr.

    Bu yöntem, özellikle büyük veri yapýlarýnda veya fonksiyonlar arasý veri iletiminde kullanýþlýdýr.
*/
#include <stdio.h>
int main() {
    int x = 5;          // Birinci tamsayý deðiþkeni
    int y = 6;          // Ýkinci tamsayý deðiþkeni

    int *xptr;          // x deðiþkenini iþaret edecek pointer
    int *yptr;          // y deðiþkenini iþaret edecek pointer

    xptr = &x;          // xptr, x deðiþkeninin adresini alýr
    yptr = &y;          // yptr, y deðiþkeninin adresini alýr

    // *xptr -> x'in deðeri, *yptr -> y'nin deðeri
    // Bu deðerleri topluyoruz ve sonucu yazdýrýyoruz
    printf("Toplam = %d\n", (*xptr + *yptr));

    return 0;           // Program baþarýyla bitti
}
