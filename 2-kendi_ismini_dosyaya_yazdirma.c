#include <stdlib.h>
#include <stdio.h>

/*
    KEND� �SM�N� DOSYAYA YAZDIRMA �RNE��

    Bu program:
    1. "text.txt" dosyas�n� ekleme ("a") modunda a�ar
    2. Dosyaya isminizi yazar
    3. Ekrana da ayn� ismi yazd�r�r
    4. Dosyay� kapat�r

    �NEML� NOKTALAR:
    - "a" (append) modu: Dosya yoksa olu�turur, varsa sonuna ekler
    - fprintf ile dosyaya yazarken format belirteci (%s, %d vb.) kullan�lmal�
    - A��lan dosyalar mutlaka kapat�lmal�
    - Hata kontrol� yapmak iyi bir programlama al��kanl���d�r
*/

int main() {
    int a = 10; // Tan�mlanm�� ama kullan�lmayan de�i�ken (�rnek ama�l�)
    FILE *dyaz; // Dosya pointer'�
    char ad[50] = "Deniz"; // �sminizi saklayan dizi

    // Dosyay� ekleme modunda a�
    dyaz = fopen("text.txt", "a");

    // Dosyaya ismi yaz
    fprintf(dyaz, "%s\n", ad); // string yazd�rma

    // Ekrana da yazd�r
    printf("%s\n", ad);

    // Dosyay� kapat
    fclose(dyaz);

    return 0; // Ba�ar�l� ��k��
}

/*
    �ALI�TIRMA SONUCU:
    - Program her �al��t�r�ld���nda "text.txt" dosyas�n�n SONUNA "Deniz" yaz�l�r
    - E�er dosya yoksa otomatik olu�turulur
    - Ekrana da "Deniz" yaz�l�r
*/

