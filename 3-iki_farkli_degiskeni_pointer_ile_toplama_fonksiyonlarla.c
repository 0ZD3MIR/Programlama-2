/*
    POINTER (G�STER�C�) KULLANARAK FONKS�YONDA TOPLAMA ��LEM�

    Bu �rnekte:
    - �ki adet tamsay� de�i�keni (x ve y) tan�mlan�r.
    - Bu de�i�kenlerin adresleri, fonksiyona pointer (g�sterici) olarak g�nderilir.
    - Fonksiyon, bu adreslerin g�sterdi�i de�erleri (dereference i�lemi ile) al�r.
    - Bu de�erler toplanarak sonu� d�nd�r�l�r ve ekrana yazd�r�l�r.

    Bu yap�n�n en b�y�k avantaj�, ayn� fonksiyonun farkl� veri k�meleri �zerinde �al��abilmesini sa�lamas�d�r.
    S�navlarda s�k�a sorulan bir pointer kullan�m �eklidir.
*/
#include <stdio.h>
int toplam(int *a, int *b);  // Fonksiyon prototipi

int main() {
    int x = 10, y = 20;

    printf("Toplam = %d\n", toplam(&x, &y));  // x ve y'nin adresleri g�nderilir

    return 0;
}

int toplam(int *a, int *b) {
    return (*a + *b);  // Pointer'lar�n g�sterdi�i de�erler toplan�r
}

