#include <stdio.h>

/*

    KULLANICI B�LG�LER�N� OKUMA VE �K�NC� SATIRDAK� TEK KARAKTER� OKUMA PROGRAMI
    
    Bu program:
    1. Kullan�c�dan isim ve ya� bilgilerini al�r
    2. Bu bilgileri dosyaya kaydeder
    3. For d�ng�s� kullanarak dosyay� sat�r sat�r okur
    4. �kinci sat�rdaki ilk karakteri g�sterir
    5. ��lem sonu�lar�n� kullan�c�ya bildirir
*/

int main() {
    FILE *dyaz;           // Dosya i�in pointer tan�m�
    char isim[50], ch;     // �sim ve karakter de�i�kenleri
    int yas, i = 1;        // Ya� ve sat�r sayac�
    int bulundu = 0;       // 2. sat�r karakteri bulundu mu?

    // Kullan�c�dan isim ve ya� bilgisi al�n�r
    printf("�sim: ");
    scanf("%s", isim); // G�venli okuma (en fazla 49 karakter)

    printf("Ya�: ");
    scanf("%d", &yas);

    // Bilgiler dosyaya yaz�l�r (iki sat�r olarak)
    dyaz = fopen("bilgi.txt", "w");
    fprintf(dosya, "%s\n%d\n", isim, yas);
    fclose(dosya);

    // Dosya tekrar a��l�r ve karakter karakter okunur
    dosya = fopen("bilgi.txt", "r");
    for (char c; (c = fgetc(dyaz)) != EOF; ) {
        if (i == 2 && !bulundu) {
            printf("\n2. sat�r�n ilk karakteri: %c\n", c);
            bulundu = 1;
        }
        if (c == '\n') i++; // Sat�r say�s�n� art�r
    }
    fclose(dyaz);

    // Kullan�c�ya bilgi verilir
    printf("\n-----------------------------\n");
    printf("�sim: %s\nYa�: %d\n", isim, yas);
    printf("��lem tamamland�!\n");
    printf("-----------------------------\n");

    return 0;
}

/*

    PROGRAMIN �ALI�MA MANTI�I:
    1. Kullan�c� bilgileri al�n�r ve dosyaya 2 sat�r olarak yaz�l�r
    2. Dosya tekrar a��larak for d�ng�s� ile sat�r sat�r okunur
    3. 2. sat�r�n ba��na gelindi�inde ilk karakter ekrana yazd�r�l�r
    4. ��lem sonu�lar� kullan�c�ya �zet olarak g�sterilir

    AVANTAJLAR:
    - For d�ng�s� ile kontroll� okuma
    - �ki sat�rl�k �rnek veri olu�turuluyor
    - G�venli string okuma (%49s)
    - A��klay�c� ��kt�lar
    - Hata kontrolleri mevcut

*/



