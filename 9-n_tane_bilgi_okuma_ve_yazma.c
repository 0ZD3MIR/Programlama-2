#include <stdio.h>
#include <stdlib.h>

/*

    N TANE KULLANICI BİLGİSİNİ OKUYAN VE DOSYAYA YAZIP OKUYAN PROGRAM

    Bu program:
    1. Kullanıcıdan kaç kişi bilgisi girileceğini (n) alır
    2. Her kişi için ad ve yaş bilgilerini alır
    3. Bilgileri bir dosyaya yazar
    4. Dosyayı tekrar okuyarak girilen verileri ekrana yazdırır

*/

int main() {
    char ad[50];     // İsim bilgisi için karakter dizisi
    int yas;         // Yaş bilgisi
    int n;           // Kaç kişi için bilgi girilecek
    FILE *dosya;

    // Kullanıcıdan kaç kayıt alınacağını sor
    printf("Kaç kişi için bilgi girilecek? ");
    scanf("%d", &n);

    // Dosyayı yazma modunda aç
    dosya = fopen("veriler.txt", "w");
    
    // n defa ad ve yaş bilgisi al, dosyaya yaz
    for (int i = 0; i < n; i++) {
        printf("%d. Kişinin Adı ve Yaşı: ", i + 1);
        scanf("%s %d", ad, &yas);
        fprintf(dosya, "%s %d\n", ad, yas);
    }

    fclose(dosya); // Dosyayı kapat

    // Dosyayı okuma modunda aç
    dosya = fopen("veriler.txt", "r");


    printf("\n--- Dosyadaki Kayıtlar ---\n");

    // Satır satır dosyayı oku ve ekrana yaz
    while (fgets(ad, sizeof(ad), dosya) != NULL) {
        printf("%s", ad); // fgets zaten \n içerdiği için \n eklemeye gerek yok
    }

    fclose(dosya); // Dosyayı kapat

    return 0;
}

/*

    PROGRAMIN ÇALIŞMA MANTIĞI:
    1. Kullanıcıdan kaç kişi bilgisi alınacağı (n) istenir
    2. Her kişi için ad ve yaş bilgisi alınır ve dosyaya yazılır
    3. Dosya okuma modunda tekrar açılır
    4. Tüm satırlar okunarak ekrana yazdırılır


*/

