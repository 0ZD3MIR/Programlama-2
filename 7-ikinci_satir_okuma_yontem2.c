#include <stdio.h>

/*
    KULLANICI B�LG� KAYIT VE OKUMA PROGRAMI
    - Kullan�c�dan ad ve ya� bilgisi al�r
    - Bilgileri dosyaya 2 sat�r olarak yazar
    - Dosyadan ikinci sat�r�n ilk karakterini okur
*/

int main() {
    char isim[50];      // Kullan�c� ismini tutacak dizi
    int yas;            // Kullan�c� ya��
    FILE *dosya;        // Dosya pointer'�

    // 1. Kullan�c�dan bilgi al
    printf("Ad�n�z: ");
    scanf("%s", isim);              // Ad bilgisini al
    printf("Ya��n�z: ");
    scanf("%d", &yas);              // Ya� bilgisini al

    fprintf(dosya, "Bilgiler:\n%s %d\n", isim, yas);  // 2 sat�r yaz
    fclose(dosya);  // Dosyay� kapat

    // 3. Dosyadan 2. sat�r�n ilk karakterini oku
    dosya = fopen("bilgiler.txt", "r");  // Okuma modunda a�
    if (dosya == NULL) {
        printf("Dosya okuma hatas�!\n");
        return 1;
    }

    char ch;        // Her seferinde bir karakter tutulacak
    int satir = 0;  // Sat�r sayac�

    while ((ch = fgetc(dosya)) != EOF) {
        if (ch == '\n') {
            satir++;           // Sat�r say�s�n� art�r
            continue;          // Sat�r atland�ktan sonra okumaya devam
        }

        if (satir == 1) {      // 2. sat�r�n ilk karakteri
            printf("2. sat�r�n ilk karakteri: %c\n", ch);
            break;             // Bulunca ��k
        }
    }

    fclose(dosya);  // Dosyay� kapat
    return 0;
}

/*
    PROGRAMIN �ALI�MA ADIMLARI:
    1. Kullan�c�dan ad ve ya� bilgisi al�n�r
    2. bilgiler.txt dosyas�na 2 sat�r olarak yaz�l�r:
       - 1. sat�r: "Bilgiler:"
       - 2. sat�r: "<isim> <yas>"
    3. Dosya tekrar a��l�r ve sat�r sat�r karakter okunur
    4. 2. sat�r�n ilk karakteri (�rne�in 'A') bulunarak ekrana yazd�r�l�r

    �RNEK �IKTI:
    Ad�n�z: Ahmet
    Ya��n�z: 25
    2. sat�r�n ilk karakteri: A

    AVANTAJLAR:
    - Karakter karakter okuma ile kontrol kolayl���
    - Temel dosya yazma ve okuma i�levleri bir arada
    - fgets kullan�lmadan do�rudan karakter seviyesi ��z�m
    - Dosya a�ma kontrolleri ile daha g�venli yap�

    NOT:
    - Ger�ek uygulamalarda kullan�c� ad� bo�luklu ise fgets tercih edilmelidir
    - Program s�nav ortam�nda kolay yaz�labilecek d�zeydedir
*/

