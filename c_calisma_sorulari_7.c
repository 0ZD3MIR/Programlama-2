
// 📌 Programlama-2 7. Çalışma Soruları – Mayın Tarlası ve Hanoi Kuleleri Problemi
// ✨ Konular: Matris, Rastgele Sayılar, Fonksiyonlar, Özyineleme

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 🟨 1. SORU: Mayın Tarlası Oyunu (10x10)
//#include <stdio.h> → Ekrana çıktı vermek için (printf, putchar)
//#include <stdlib.h> → Rastgele sayı üretimi için (rand, srand)
//#include <time.h> → Zaman tabanlı rastgelelik için (time(0))
void mayinTarlasi() {
    char m[10][10];
    int row[10] = {0}, col[10] = {0}, mines = 0;

    // Tüm hücreleri '.' yap
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            m[i][j] = '.';

    srand(time(0)); // Rastgelelik başlat

    // Şartlara uyan şekilde 10 mayın yerleştir
    while (mines < 10) {
        int r = rand() % 10;
        int c = rand() % 10;

        if (m[r][c] == '.' && row[r] < 3 && col[c] < 3) {
            m[r][c] = '*';
            row[r]++;
            col[c]++;
            mines++;
        }
    }

    // Tarlayı yazdır
    printf("\n💣 Mayin Tarlasi (10x10):\n\n");
    for (int i = 0; i < 10; i++, putchar('\n'))
        for (int j = 0; j < 10; j++)
            printf("%c ", m[i][j]);
}

// 🟨 2. SORU: Hanoi Kuleleri Problemi (Özyineleme)
//#include <stdio.h> → Ekrana adımları yazdırmak ve kullanıcıdan giriş almak için (printf, scanf)
void hanoi(int n, char kaynak, char hedef, char gecici) {
    if (n == 1) {
        printf("📦 Disk 1: %c'den %c'ye taşınır\n", kaynak, hedef);
        return;
    }
    hanoi(n - 1, kaynak, gecici, hedef);
    printf("📦 Disk %d: %c'den %c'ye taşınır\n", n, kaynak, hedef);
    hanoi(n - 1, gecici, hedef, kaynak);
}

int main() {
    // Mayın tarlası örneği
    mayinTarlasi();

    // Hanoi örneği
    int disk_sayisi;
    printf("\n🧠 Hanoi Kuleleri Problemi\n");
    printf("Kaç disk kullanmak istiyorsunuz? ");
    scanf("%d", &disk_sayisi);
    printf("\n🔄 Çözüm adımları:\n");
    hanoi(disk_sayisi, 'A', 'C', 'B'); // A: Kaynak, C: Hedef, B: Geçici

    return 0;
}
