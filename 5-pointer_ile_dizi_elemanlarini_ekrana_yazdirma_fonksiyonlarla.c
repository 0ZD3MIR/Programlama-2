/*
    POINTER �LE D�Z� ELEMANLARINI EKRANA YAZDIRAN FONKS�YON

    Bu �rnekte:
    - 5 elemanl� bir tamsay� dizisi (n[]) tan�mlan�r ve ba�lang�� de�erleri atan�r.
    - Fonksiyon arac�l���yla dizinin t�m elemanlar� pointer kullan�larak ekrana yazd�r�l�r.
    - !!! �NEML� NOT !!! Bu i�lem orijinal diziyi de�i�tirmez
    
    Fonksiyonun �al��ma prensibi:
    ---------------------------
    1. 'screen' fonksiyonu, bir pointer ve dizinin eleman say�s�n� parametre olarak al�r.
    2. Pointer, dizinin ba�lang�� adresine i�aret eder ve pointer aritmeti�i kullan�larak dizinin her eleman�na ula��l�r.
    3. Dizinin her bir eleman�n�n adresi `*(p + i)` ifadesi ile dereference edilip ekrana yazd�r�l�r.
    
*/
#include <stdio.h>
void screen(int *p, int n) {
    // Pointer aritmeti�i kullan�larak dizinin her bir eleman� ekrana yazd�r�l�r
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));   // p+i adresindeki de�eri yazd�r
    }
    printf("\n");   // Sat�r sonu
}

int main() {
    int n[5] = {1, 2, 3, 4, 5};  // 5 elemanl� tamsay� dizisi tan�mlan�yor
    int *nptr;                    // Pointer tan�mlan�yor
    
    // 'screen' fonksiyonuna dizinin ba�lang�� adresi ve eleman say�s� g�nderiliyor
    screen(&n[0], 5);

    return 0;   // Program ba�ar�yla sona erdi
}

