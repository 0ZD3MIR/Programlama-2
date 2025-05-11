// ===============================================================
// Programlama-2 Çalışma Soruları-7
// 1.Soru: Mayın Tarlası oyunun 10X10 bir matrisinin rastgele 10 mayın yerleştirilecek.
// Aşağıdaki koşullara yerleşim sağlanması gerek. 
// Bu işlemleri yaparken fonksiyon yapısını gösteriniz. 
// En son olarak Mayın Tarlasını ekranda gösteriniz. 
// a. 10 mayın rastgele satır ve sütün da atanmalı.
// b. Her satırda en fazla 3 mayın yerleşmeli.
// c. Her sütün da en fazla 3 mayın yerleşmeli. 
// ===============================================================
#include <stdio.h>    // Standart giriş/çıkış fonksiyonları için
#include <stdlib.h>   // Rastgele sayı üretimi (rand, srand) ve bellek yönetimi için
#include <time.h>     // Zaman fonksiyonları (time) için

/*
 * 10x10 boyutunda mayın tarlası oluşturan fonksiyon
 * - Her satırda ve sütunda en fazla 3 mayın olacak şekilde
 * - Toplam 10 mayın rastgele yerleştirilecek
 * - Mayınlar '*' karakteri, boş alanlar '.' karakteri ile gösterilecek
 */
void mayinTarlasi() {
    char m[10][10];          // 10x10'luk mayın tarlası matrisi
    int row[10] = {0};       // Her satırdaki mayın sayısını tutan dizi
    int col[10] = {0};       // Her sütundaki mayın sayısını tutan dizi
    int mines = 0;           // Yerleştirilen toplam mayın sayısı

    // Matrisin tüm hücrelerini başlangıçta boş ('.') olarak ayarla
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            m[i][j] = '.';
        }
    }

    // Rastgele sayı üreteci için seed ayarla (zamanı kullan)
    srand(time(0));

    // 10 mayın yerleştirme döngüsü
    while (mines < 10) {
        int r = rand() % 10;  // 0-9 arası rastgele satır
        int c = rand() % 10;  // 0-9 arası rastgele sütun

        // Eğer bu hücre boşsa ve satır/sütun kurallarına uyuyorsa
        if (m[r][c] == '.' && row[r] < 3 && col[c] < 3) {
            m[r][c] = '*';   // Mayın yerleştir
            row[r]++;        // Satırdaki mayın sayısını artır
            col[c]++;        // Sütundaki mayın sayısını artır
            mines++;         // Toplam mayın sayısını artır
        }
    }

    // Mayın tarlasını ekrana yazdır
    printf("\n?? Mayin Tarlasi (10x10):\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", m[i][j]);
        }
        printf("\n");  // Her satırdan sonra yeni satıra geç
    }
}

int main() {
    printf("=== MAYIN TARLASI OYUNU ===\n");
    mayinTarlasi();  // Mayın tarlası fonksiyonunu çağır
    return 0;
}
