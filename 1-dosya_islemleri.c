#include<stdlib.h>
#include<stdio.h>

/*
    DOSYA ��LEMLER� - TEMEL KAVRAMLAR

    Dosya i�lemleri, verilerin kal�c� olarak saklanmas� i�in kullan�l�r.
    Temel dosya i�lemleri �unlard�r:
    1. Dosya a�ma (fopen)
    2. Dosyaya yazma/okuma (fprintf, fscanf, fgets, fputs vb.)
    3. Dosya kapatma (fclose)

    DOSYA A�MA MODLARI:
    -------------------
    | Mod | A��klama                                |
    |-----|-----------------------------------------|
    | "r" | Sadece okuma (dosya yoksa hata verir)   |
    | "w" | Yazma (dosya yoksa olu�turur, varsa S�LER) |
    | "a" | Ekleme (dosya yoksa olu�turur, varsa sonuna ekler) |
    | "r+"| Okuma ve yazma (dosya yoksa hata verir)  |
    | "w+"| Okuma ve yazma (dosya yoksa olu�turur, varsa S�LER) |
    | "a+"| Okuma ve ekleme (dosya yoksa olu�turur)  |

    �NEML� NOTLAR:
    - Dosya i�lemleri yaparken mutlaka hata kontrol� yap�lmal�d�r.
    - A��lan her dosya mutlaka kapat�lmal�d�r.
    - "w" ve "w+" modlar� D�KKATL� kullan�lmal�d�r, ��nk� varolan dosyan�n i�eri�ini siler!
*/

int main() {
    FILE *dyaz; // Dosya pointer'� 
    // derste dyaz isimli bir klas�r olu�turduk ve t�m programlar�n� onun i�inde yapt�k 
    // o y�zden bunu pointer yapt�k
    
    /* 
       Dosyay� yazma modunda a�ma ("w" modu)
       - "ornek.txt" ad�nda dosya olu�turulacak
       - Dosya zaten varsa ��ER��� TAMAMEN S�L�NECEK
       - Dosya yoksa yeni olu�turulacak
    */
    dyaz = fopen("ornek.txt", "w");
    
    // Dosyaya yazma i�lemi
    fprintf(dyaz, "Bu bir deneme yaz�s�d�r.\n");
    fprintf(dyaz, "Dosya i�lemleri ��reniyorum.\n");
    
    // Ekrana yazd�rma
    printf("Dosyaya yaz� yaz�ld�.\n");
    
    // Dosyay� kapatma
    fclose(dyaz);
    
    return 0; // Program�n ba�ar�yla sonland���n� belirt
}

/*
    BU KODUN �ALI�MA MANTI�I:
    1. "ornek.txt" ad�nda bir dosya olu�turulur (veya varsa i�eri�i silinir)
    2. Dosyaya iki sat�rl�k metin yaz�l�r
    3. Ekrana bilgi mesaj� yazd�r�l�r
    4. Dosya kapat�larak kay�t i�lemi tamamlan�r
    
*/
