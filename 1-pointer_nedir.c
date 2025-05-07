/*
    POINTER (G�STER�C�) NED�R ve NEDEN �NEML�D�R?

    Pointer'lar (g�stericiler), bir de�i�kenin bellekteki adresini tutan de�i�kenlerdir.
    Programlama a��s�ndan �ok g��l� ve �nemlidirler ��nk�:

    1. Bellek y�netimini daha etkili yapmam�z� sa�larlar.
    2. Fonksiyonlara adres ile veri g�ndererek de�er de�il referans �zerinden i�lem yapar�z (call by reference).
    3. Dinamik bellek (heap) kullan�m�nda zorunludur (malloc, calloc, free gibi fonksiyonlarla).
    4. Veri yap�lar�nda (ba�l� listeler, a�a�lar, grafikler vb.) temel yap� ta��d�r.
    5. Dizi ve string i�lemlerinde esneklik sa�lar.

    S�navlarda s�k sorulan bir konudur, �zellikle & (adres operat�r�) ve * (dereference/y�nlendirme) operat�rlerinin 
    i�levi iyi anla��lmal�d�r.
*/
#include <stdio.h>
int main() {
    int x = 4;          // Normal bir tamsay� de�i�keni tan�mlan�yor
    int *xptr;          // x ad�nda bir tamsay�n�n adresini tutacak pointer tan�m�

    xptr = &x;          // xptr, x'in adresini tutacak �ekilde atan�yor

    printf("x de�eri     : %d\n", x);         // x'in kendisi
    printf("x adresi     : %p\n", xptr);      // xptr'nin tuttu�u adres (x'in adresi)
    printf("xptr i�eri�i : %d\n", *xptr);     // xptr'nin g�sterdi�i adresteki de�er (yani x)

    return 0;           // Program ba�ar�yla sona erdi
}


