/*
    POINTER (GÖSTERÝCÝ) NEDÝR ve NEDEN ÖNEMLÝDÝR?

    Pointer'lar (göstericiler), bir deðiþkenin bellekteki adresini tutan deðiþkenlerdir.
    Programlama açýsýndan çok güçlü ve önemlidirler çünkü:

    1. Bellek yönetimini daha etkili yapmamýzý saðlarlar.
    2. Fonksiyonlara adres ile veri göndererek deðer deðil referans üzerinden iþlem yaparýz (call by reference).
    3. Dinamik bellek (heap) kullanýmýnda zorunludur (malloc, calloc, free gibi fonksiyonlarla).
    4. Veri yapýlarýnda (baðlý listeler, aðaçlar, grafikler vb.) temel yapý taþýdýr.
    5. Dizi ve string iþlemlerinde esneklik saðlar.

    Sýnavlarda sýk sorulan bir konudur, özellikle & (adres operatörü) ve * (dereference/yönlendirme) operatörlerinin 
    iþlevi iyi anlaþýlmalýdýr.
*/
#include <stdio.h>
int main() {
    int x = 4;          // Normal bir tamsayý deðiþkeni tanýmlanýyor
    int *xptr;          // x adýnda bir tamsayýnýn adresini tutacak pointer tanýmý

    xptr = &x;          // xptr, x'in adresini tutacak þekilde atanýyor

    printf("x deðeri     : %d\n", x);         // x'in kendisi
    printf("x adresi     : %p\n", xptr);      // xptr'nin tuttuðu adres (x'in adresi)
    printf("xptr içeriði : %d\n", *xptr);     // xptr'nin gösterdiði adresteki deðer (yani x)

    return 0;           // Program baþarýyla sona erdi
}


