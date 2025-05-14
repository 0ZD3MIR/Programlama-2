#include <stdio.h>

/*
    DOSYADAN D�Z� OKUMA �RNE�� (fgets KULLANIMI)

    Bu program:
    1. "input.txt" dosyas�n� a�ar
    2. fgets() fonksiyonu ile dosyadan belirtilen say�da karakter okur
    3. Okunan dizgiyi ekrana yazd�r�r

    �RNEK DOSYA ��ER���:
    AL� 125�
    Osman 243�
    Yoll 23�
    egrend.txt
*/

int main() 
{
    FILE *dosyaoku;
    char st1[30];
    
    // Dosyay� okuma modunda a�
    dosyaoku = fopen("input.txt","r");  // Orijinal kodda "z" modu yanl��t�r, "r" olarak d�zeltildi
    
    // Dosyadan 4 karakter oku (3 karakter + null karakter)
    fgets(st1, 4, dosyaoku);
    
    // Okunan dizgiyi ekrana yazd�r
    printf("st1: %s\n", st1);
    
    // Dosyay� kapat
    fclose(dosyaoku);
    
    return 0;
}

/*
    �ALI�TIRMA SONUCU:
    st1: AL�

    PROGRAMIN �ALI�MA MANTI�I:
    1. "input.txt" dosyas� okuma modunda a��l�r
    2. fgets() fonksiyonu ile dosyadan en fazla 3 karakter okunur (4. karakter null karakter i�in)
    3. Okunan dizgi printf ile ekrana yazd�r�l�r
    4. Dosya kapat�larak i�lem tamamlan�r

    FGETS FONKS�YONU:
    - Parametreler: (dizi, okunacak_max_karakter_say�s�, dosya_pointer)
    - Okuma i�lemi:
      * Belirtilen karakter say�s�-1 kadar okur
      * Son karakter olarak null karakter ('\0') ekler
      * Sat�r sonu (\n) karakteri g�r�rse okumay� durdurur
    - Geri d�n�� de�eri:
      * Okuma ba�ar�l�ysa dizginin adresi
      * Hata veya dosya sonu NULL
*/

/*
    D�KKAT ED�LMES� GEREKENLER:
    1. Dosya a�ma modu "r" (read) olmal�d�r
    2. fgets'in ikinci parametresi dizi boyutunu a�mamal�d�r
    3. Okunan dizgi sonunda otomatik olarak null karakter eklenir
    4. Dosya yoksa veya a��lamazsa hata olu�abilir
    5. �rnekte 4 parametresi verildi�i i�in 3 karakter okunacakt�r
*/

/*
    �RNEK DOSYA YAPISI:
    input.txt i�eri�i:
    AL� 125�
    Osman 243�
    Yoll 23�
    egrend.txt
    
    ��kt�:
    st1: AL�  (ilk 3 karakter)
*/
