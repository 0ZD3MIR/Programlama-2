#include <stdio.h>    // Standart giriþ/çýkýþ fonksiyonlarý için
#include <stdlib.h>   // Rastgele sayý üretimi (rand, srand) ve bellek yönetimi için
#include <time.h>     // Zaman fonksiyonlarý (time) için

/*
 * 10x10 boyutunda mayýn tarlasý oluþturan fonksiyon
 * - Her satýrda ve sütunda en fazla 3 mayýn olacak þekilde
 * - Toplam 10 mayýn rastgele yerleþtirilecek
 * - Mayýnlar '*' karakteri, boþ alanlar '.' karakteri ile gösterilecek
 */
void mayinTarlasi() {
    char m[10][10];          // 10x10'luk mayýn tarlasý matrisi
    int row[10] = {0};       // Her satýrdaki mayýn sayýsýný tutan dizi
    int col[10] = {0};       // Her sütundaki mayýn sayýsýný tutan dizi
    int mines = 0;           // Yerleþtirilen toplam mayýn sayýsý

    // Matrisin tüm hücrelerini baþlangýçta boþ ('.') olarak ayarla
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            m[i][j] = '.';
        }
    }

    // Rastgele sayý üreteci için seed ayarla (zamaný kullan)
    srand(time(0));

    // 10 mayýn yerleþtirme döngüsü
    while (mines < 10) {
        int r = rand() % 10;  // 0-9 arasý rastgele satýr
        int c = rand() % 10;  // 0-9 arasý rastgele sütun

        // Eðer bu hücre boþsa ve satýr/sütun kurallarýna uyuyorsa
        if (m[r][c] == '.' && row[r] < 3 && col[c] < 3) {
            m[r][c] = '*';   // Mayýn yerleþtir
            row[r]++;        // Satýrdaki mayýn sayýsýný artýr
            col[c]++;        // Sütundaki mayýn sayýsýný artýr
            mines++;         // Toplam mayýn sayýsýný artýr
        }
    }

    // Mayýn tarlasýný ekrana yazdýr
    printf("\n?? Mayin Tarlasi (10x10):\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", m[i][j]);
        }
        printf("\n");  // Her satýrdan sonra yeni satýra geç
    }
}

int main() {
    printf("=== MAYIN TARLASI OYUNU ===\n");
    mayinTarlasi();  // Mayýn tarlasý fonksiyonunu çaðýr
    return 0;
}
