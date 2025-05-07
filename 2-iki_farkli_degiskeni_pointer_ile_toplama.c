/*
    �K� FARKLI DE���KEN� POINTER (G�STER�C�) KULLANARAK TOPLAYAN PROGRAM

    Bu �rnekte:
    - �ki adet tamsay� de�i�keni (x ve y) tan�mlan�r.
    - Her bir de�i�ken i�in birer pointer (xptr ve yptr) tan�mlan�r.
    - Pointer'lar bu de�i�kenlerin adreslerine atan�r.
    - Pointer'lar kullan�larak bu iki de�i�kenin de�eri toplan�r ve ekrana yazd�r�l�r.

    Bu y�ntem, �zellikle b�y�k veri yap�lar�nda veya fonksiyonlar aras� veri iletiminde kullan��l�d�r.
*/
#include <stdio.h>
int main() {
    int x = 5;          // Birinci tamsay� de�i�keni
    int y = 6;          // �kinci tamsay� de�i�keni

    int *xptr;          // x de�i�kenini i�aret edecek pointer
    int *yptr;          // y de�i�kenini i�aret edecek pointer

    xptr = &x;          // xptr, x de�i�keninin adresini al�r
    yptr = &y;          // yptr, y de�i�keninin adresini al�r

    // *xptr -> x'in de�eri, *yptr -> y'nin de�eri
    // Bu de�erleri topluyoruz ve sonucu yazd�r�yoruz
    printf("Toplam = %d\n", (*xptr + *yptr));

    return 0;           // Program ba�ar�yla bitti
}
