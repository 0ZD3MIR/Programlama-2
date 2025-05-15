#include <stdio.h>

/*
    KULLANICI BÝLGÝ KAYIT VE OKUMA PROGRAMI
    - Kullanýcýdan ad ve yaþ bilgisi alýr
    - Bilgileri dosyaya 2 satýr olarak yazar
    - Dosyadan ikinci satýrýn ilk karakterini okur
*/

int main() {
    char isim[50];      // Kullanýcý ismini tutacak dizi
    int yas;            // Kullanýcý yaþý
    FILE *dosya;        // Dosya pointer'ý

    // 1. Kullanýcýdan bilgi al
    printf("Adýnýz: ");
    scanf("%s", isim);              // Ad bilgisini al
    printf("Yaþýnýz: ");
    scanf("%d", &yas);              // Yaþ bilgisini al

    fprintf(dosya, "Bilgiler:\n%s %d\n", isim, yas);  // 2 satýr yaz
    fclose(dosya);  // Dosyayý kapat

    // 3. Dosyadan 2. satýrýn ilk karakterini oku
    dosya = fopen("bilgiler.txt", "r");  // Okuma modunda aç
    if (dosya == NULL) {
        printf("Dosya okuma hatasý!\n");
        return 1;
    }

    char ch;        // Her seferinde bir karakter tutulacak
    int satir = 0;  // Satýr sayacý

    while ((ch = fgetc(dosya)) != EOF) {
        if (ch == '\n') {
            satir++;           // Satýr sayýsýný artýr
            continue;          // Satýr atlandýktan sonra okumaya devam
        }

        if (satir == 1) {      // 2. satýrýn ilk karakteri
            printf("2. satýrýn ilk karakteri: %c\n", ch);
            break;             // Bulunca çýk
        }
    }

    fclose(dosya);  // Dosyayý kapat
    return 0;
}

/*
    PROGRAMIN ÇALIÞMA ADIMLARI:
    1. Kullanýcýdan ad ve yaþ bilgisi alýnýr
    2. bilgiler.txt dosyasýna 2 satýr olarak yazýlýr:
       - 1. satýr: "Bilgiler:"
       - 2. satýr: "<isim> <yas>"
    3. Dosya tekrar açýlýr ve satýr satýr karakter okunur
    4. 2. satýrýn ilk karakteri (örneðin 'A') bulunarak ekrana yazdýrýlýr

    ÖRNEK ÇIKTI:
    Adýnýz: Ahmet
    Yaþýnýz: 25
    2. satýrýn ilk karakteri: A

    AVANTAJLAR:
    - Karakter karakter okuma ile kontrol kolaylýðý
    - Temel dosya yazma ve okuma iþlevleri bir arada
    - fgets kullanýlmadan doðrudan karakter seviyesi çözüm
    - Dosya açma kontrolleri ile daha güvenli yapý

    NOT:
    - Gerçek uygulamalarda kullanýcý adý boþluklu ise fgets tercih edilmelidir
    - Program sýnav ortamýnda kolay yazýlabilecek düzeydedir
*/

