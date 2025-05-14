#include <stdio.h>

/*
    DOSYADAN �LK KARAKTER OKUMA �RNE��

    Bu program:
    1. "input.txt" dosyas�n� a�ar
    2. Dosyadaki ilk karakteri okur
    3. Okunan karakteri ekrana yazd�r�r

    �RNEK DOSYA ��ER���:
    ALi 125p
    Osman 24p
    Veli 325p
    0
    ogranc1.txt
*/

int main() 
{
    FILE *dosyaoku;
    char ch;
    
    // Dosyay� okuma modunda a�
    dosyaoku = fopen("input.txt","r");  // Orijinal kodda "z" modu yanl��t�r, "r" olarak d�zeltildi
    
    // Dosyadan ilk karakteri oku
    ch = fgetc(dosyaoku);
    
    // Okunan karakteri ekrana yazd�r
    printf("Dosyadaki ilk karakter: %c\n", ch);  // Orijinal kodda "ln" yanl��t�r, "\n" olarak d�zeltildi
    
    // Dosyay� kapat
    fclose(dosyaoku);
    
    return 0;
}

/*
    �ALI�TIRMA SONUCU:
    Dosyadaki ilk karakter: A

    PROGRAMIN �ALI�MA MANTI�I:
    1. "input.txt" dosyas� okuma modunda a��l�r
    2. fgetc() fonksiyonu ile dosyadaki ilk karakter okunur
    3. Okunan karakter printf ile ekrana yazd�r�l�r
    4. Dosya kapat�larak i�lem tamamlan�r

    D�KKAT ED�LMES� GEREKENLER:
    1. Dosya a�ma modu "r" (read) olmal�d�r (orijinal kodda "z" yanl��t�)
    2. printf'te yeni sat�r i�in "\n" kullan�lmal�d�r (orijinal kodda "ln" yanl��t�)
    3. Dosyan�n programla ayn� dizinde olmas� gerekir
    4. Dosya yoksa veya a��lamazsa hata olu�abilir
*/

/*
    KULLANILAN FONKS�YONLAR:
    
    fopen(): Dosya a�ma fonksiyonu
    - "r": Okuma modu (dosya mevcut olmal�)
    
    fgetc(): Dosyadan bir karakter okur
    
    printf(): Formatl� ��kt� yazd�rma
    
    fclose(): A��k dosyay� kapat�r
*/
