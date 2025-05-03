#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// -------------------- MAYIN TARLASI --------------------
char tarlam[SIZE][SIZE];
char gorunum[SIZE][SIZE];
int row[SIZE] = {0}, col[SIZE] = {0};

void mayinlariYerlestir() {
    srand(time(0));
    int mines = 0;
    while (mines < 10) {
        int r = rand() % SIZE;
        int c = rand() % SIZE;
        if (tarlam[r][c] != '*' && row[r] < 3 && col[c] < 3) {
            tarlam[r][c] = '*';
            row[r]++;
            col[c]++;
            mines++;
        }
    }
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (tarlam[i][j] != '*')
                tarlam[i][j] = '.';
}

int sayMayin(int x, int y) {
    int say = 0;
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++) {
            int nx = x + i, ny = y + j;
            if (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE && tarlam[nx][ny] == '*')
                say++;
        }
    return say;
}

void oyunBaslat() {
    mayinlariYerlestir();
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            gorunum[i][j] = '#';

    int acilan = 0;
    while (1) {
        int x, y;
        printf("\nMatris:\n");
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++)
                printf("%c ", gorunum[i][j]);
            printf("\n");
        }

        printf("\nSatır ve sütun gir (0-9): ");
        scanf("%d %d", &x, &y);

        if (x < 0 || x >= SIZE || y < 0 || y >= SIZE) {
            printf("❌ Geçersiz giriş. Tekrar deneyin.\n");
            continue;
        }

        if (tarlam[x][y] == '*') {
            printf("\n💥 Mayına bastınız! Oyun bitti.\n");
            break;
        }

        if (gorunum[x][y] != '#') continue;

        int sayi = sayMayin(x, y);
        gorunum[x][y] = '0' + sayi;
        acilan++;

        if (acilan == SIZE * SIZE - 10) {
            printf("\n🎉 Tebrikler! Tüm alanı açtınız.\n");
            break;
        }
    }
}

// -------------------- VEKTÖR ÇARPIMI --------------------
struct Vector3 {
    float x, y, z;
};

float skalerCarpim(struct Vector3 a, struct Vector3 b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

struct Vector3 vektorCarpim(struct Vector3 a, struct Vector3 b) {
    struct Vector3 sonuc;
    sonuc.x = a.y * b.z - a.z * b.y;
    sonuc.y = a.z * b.x - a.x * b.z;
    sonuc.z = a.x * b.y - a.y * b.x;
    return sonuc;
}

void vektorIslemleri() {
    struct Vector3 v1, v2;
    printf("\nBirinci vektör (x y z): ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    printf("İkinci vektör (x y z): ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    printf("\n🔸 Skaler çarpım = %.2f\n", skalerCarpim(v1, v2));

    struct Vector3 sonuc = vektorCarpim(v1, v2);
    printf("🔹 Vektörel çarpım = (%.2f, %.2f, %.2f)\n", sonuc.x, sonuc.y, sonuc.z);
}

// -------------------- KARMAŞIK SAYILAR --------------------
struct Karmaşık {
    float re, im;
};

struct Karmaşık topla(struct Karmaşık a, struct Karmaşık b) {
    struct Karmaşık s;
    s.re = a.re + b.re;
    s.im = a.im + b.im;
    return s;
}

struct Karmaşık carp(struct Karmaşık a, struct Karmaşık b) {
    struct Karmaşık c;
    c.re = a.re * b.re - a.im * b.im;
    c.im = a.re * b.im + a.im * b.re;
    return c;
}

void karmasikIslemler() {
    struct Karmaşık s1, s2;
    printf("\nBirinci karmaşık sayı (gerçek sanal): ");
    scanf("%f %f", &s1.re, &s1.im);
    printf("İkinci karmaşık sayı (gerçek sanal): ");
    scanf("%f %f", &s2.re, &s2.im);

    struct Karmaşık toplam = topla(s1, s2);
    struct Karmaşık carpim = carp(s1, s2);

    printf("\n➕ Toplam = %.2f + %.2fi\n", toplam.re, toplam.im);
    printf("✖️ Çarpım = %.2f + %.2fi\n", carpim.re, carpim.im);
}

// -------------------- ANA MENÜ --------------------
int main() {
    int secim;

    printf("📘 Çalışma Soruları 8 - Program Menüsü\n");
    printf("1. Mayın Tarlası Oyunu\n");
    printf("2. Vektör Çarpımı (Skaler & Vektörel)\n");
    printf("3. Karmaşık Sayı İşlemleri\n");
    printf("Seçiminiz (1-3): ");
    scanf("%d", &secim);

    switch (secim) {
        case 1: oyunBaslat(); break;
        case 2: vektorIslemleri(); break;
        case 3: karmasikIslemler(); break;
        default: printf("❌ Geçersiz seçim!\n"); break;
    }

    return 0;
}
