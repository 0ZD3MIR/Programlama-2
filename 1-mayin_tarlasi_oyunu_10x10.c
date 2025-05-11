#include <stdio.h>    // Standart giri�/��k�� fonksiyonlar� i�in
#include <stdlib.h>   // Rastgele say� �retimi (rand, srand) ve bellek y�netimi i�in
#include <time.h>     // Zaman fonksiyonlar� (time) i�in

/*
 * 10x10 boyutunda may�n tarlas� olu�turan fonksiyon
 * - Her sat�rda ve s�tunda en fazla 3 may�n olacak �ekilde
 * - Toplam 10 may�n rastgele yerle�tirilecek
 * - May�nlar '*' karakteri, bo� alanlar '.' karakteri ile g�sterilecek
 */
void mayinTarlasi() {
    char m[10][10];          // 10x10'luk may�n tarlas� matrisi
    int row[10] = {0};       // Her sat�rdaki may�n say�s�n� tutan dizi
    int col[10] = {0};       // Her s�tundaki may�n say�s�n� tutan dizi
    int mines = 0;           // Yerle�tirilen toplam may�n say�s�

    // Matrisin t�m h�crelerini ba�lang��ta bo� ('.') olarak ayarla
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            m[i][j] = '.';
        }
    }

    // Rastgele say� �reteci i�in seed ayarla (zaman� kullan)
    srand(time(0));

    // 10 may�n yerle�tirme d�ng�s�
    while (mines < 10) {
        int r = rand() % 10;  // 0-9 aras� rastgele sat�r
        int c = rand() % 10;  // 0-9 aras� rastgele s�tun

        // E�er bu h�cre bo�sa ve sat�r/s�tun kurallar�na uyuyorsa
        if (m[r][c] == '.' && row[r] < 3 && col[c] < 3) {
            m[r][c] = '*';   // May�n yerle�tir
            row[r]++;        // Sat�rdaki may�n say�s�n� art�r
            col[c]++;        // S�tundaki may�n say�s�n� art�r
            mines++;         // Toplam may�n say�s�n� art�r
        }
    }

    // May�n tarlas�n� ekrana yazd�r
    printf("\n?? Mayin Tarlasi (10x10):\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", m[i][j]);
        }
        printf("\n");  // Her sat�rdan sonra yeni sat�ra ge�
    }
}

int main() {
    printf("=== MAYIN TARLASI OYUNU ===\n");
    mayinTarlasi();  // May�n tarlas� fonksiyonunu �a��r
    return 0;
}
