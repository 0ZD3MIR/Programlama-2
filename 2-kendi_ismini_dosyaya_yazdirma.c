#include <stdlib.h>
#include <stdio.h>

/*
    KENDÝ ÝSMÝNÝ DOSYAYA YAZDIRMA ÖRNEÐÝ

    Bu program:
    1. "text.txt" dosyasýný ekleme ("a") modunda açar
    2. Dosyaya isminizi yazar
    3. Ekrana da ayný ismi yazdýrýr
    4. Dosyayý kapatýr

    ÖNEMLÝ NOKTALAR:
    - "a" (append) modu: Dosya yoksa oluþturur, varsa sonuna ekler
    - fprintf ile dosyaya yazarken format belirteci (%s, %d vb.) kullanýlmalý
    - Açýlan dosyalar mutlaka kapatýlmalý
    - Hata kontrolü yapmak iyi bir programlama alýþkanlýðýdýr
*/

int main() {
    int a = 10; // Tanýmlanmýþ ama kullanýlmayan deðiþken (örnek amaçlý)
    FILE *dyaz; // Dosya pointer'ý
    char ad[50] = "Deniz"; // Ýsminizi saklayan dizi

    // Dosyayý ekleme modunda aç
    dyaz = fopen("text.txt", "a");

    // Dosyaya ismi yaz
    fprintf(dyaz, "%s\n", ad); // string yazdýrma

    // Ekrana da yazdýr
    printf("%s\n", ad);

    // Dosyayý kapat
    fclose(dyaz);

    return 0; // Baþarýlý çýkýþ
}

/*
    ÇALIÞTIRMA SONUCU:
    - Program her çalýþtýrýldýðýnda "text.txt" dosyasýnýn SONUNA "Deniz" yazýlýr
    - Eðer dosya yoksa otomatik oluþturulur
    - Ekrana da "Deniz" yazýlýr
*/

