/*
    POINTER (GÖSTERÝCÝ) KULLANARAK FONKSÝYONDA TOPLAMA ÝÞLEMÝ

    Bu örnekte:
    - Ýki adet tamsayý deðiþkeni (x ve y) tanýmlanýr.
    - Bu deðiþkenlerin adresleri, fonksiyona pointer (gösterici) olarak gönderilir.
    - Fonksiyon, bu adreslerin gösterdiði deðerleri (dereference iþlemi ile) alýr.
    - Bu deðerler toplanarak sonuç döndürülür ve ekrana yazdýrýlýr.

    Bu yapýnýn en büyük avantajý, ayný fonksiyonun farklý veri kümeleri üzerinde çalýþabilmesini saðlamasýdýr.
    Sýnavlarda sýkça sorulan bir pointer kullaným þeklidir.
*/
#include <stdio.h>
int toplam(int *a, int *b);  // Fonksiyon prototipi

int main() {
    int x = 10, y = 20;

    printf("Toplam = %d\n", toplam(&x, &y));  // x ve y'nin adresleri gönderilir

    return 0;
}

int toplam(int *a, int *b) {
    return (*a + *b);  // Pointer'larýn gösterdiði deðerler toplanýr
}

