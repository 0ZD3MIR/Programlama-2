// ===============================================================
// Programlama-2 Dersi - 30/04/2025
// Konular: Fonksiyonlar, Dizi İşlemleri, Özyineleme (Rekürsiyon)
// ===============================================================

#include <stdio.h>
#include <stdlib.h>

// ------------------------------------------------------------
// 1. Fonksiyonla İsim Girip Selamlama (Sabit değerle)
// ------------------------------------------------------------
void selam1(char isim[]) {
    printf("Merhaba %s\n", isim);
}

void ornek1() {
    printf("\n--- Örnek 1 ---\n");
    selam1("ahmet");
}

// ------------------------------------------------------------
// 2. Fonksiyonla İsim Girip Selamlama (Kullanıcıdan alarak)
// ------------------------------------------------------------
void selam2(char isim[]) {
    printf("Merhaba %s\n", isim);
}

void ornek2() {
    printf("\n--- Örnek 2 ---\n");
    char isim[20];
    printf("Isminizi giriniz: ");
    gets(isim);  // Not: gets() güvensizdir, fgets tercih edilmelidir
    selam2(isim);
}

// ------------------------------------------------------------
// 3. Dizideki Elemanların Ortalamasını Hesaplama
// ------------------------------------------------------------
double ortalama1(int arr[], int n) {
    double toplam = 0;
    for (int i = 0; i < n; i++) {
        toplam += arr[i];
    }
    return toplam / n;
}

void ornek3() {
    printf("\n--- Örnek 3 ---\n");
    int a[5] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Ortalama: %.2f\n", ortalama1(a, n));
}

// ------------------------------------------------------------
// 4. Dizideki Elemanların Ortalamasını Hesaplama (Farklı veri)
// ------------------------------------------------------------
double ortalama2(int arr[], int n) {
    double toplam = 0;
    printf("n: %d\n", n);
    for (int i = 0; i < n; i++) {
        toplam += arr[i];
    }
    return toplam / n;
}

void ornek4() {
    printf("\n--- Örnek 4 ---\n");
    int a[4] = {10, 20, 30, 40};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Ortalama: %.2f\n", ortalama2(a, n));
}

// ------------------------------------------------------------
// 5. Özyineleme ile Faktöriyel Hesaplama
// ------------------------------------------------------------
int fak(int n) {
    if (n == 0)
        return 1;
    else
        return n * fak(n - 1);
}

void ornek5() {
    printf("\n--- Örnek 5 ---\n");
    printf("Faktöriyel: %d\n", fak(3));
}

// ------------------------------------------------------------
// 6. 1'den 100'e kadar Toplamı Hesaplama (Rekürsif)
// ------------------------------------------------------------
int top100(int n) {
    if (n == 0)
        return 0;
    else
        return n + top100(n - 1);
}

void ornek6() {
    printf("\n--- Örnek 6 ---\n");
    printf("Toplam (1-100): %d\n", top100(100));
}

// ------------------------------------------------------------
// 7. 1'den n'e kadar Toplam (Rekürsif) - Kullanıcıdan alınabilir
// ------------------------------------------------------------
int toplamN(int n) {
    if (n == 0)
        return 0;
    else
        return n + toplamN(n - 1);
}

void ornek7() {
    printf("\n--- Örnek 7 ---\n");
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("Toplam (1-%d): %d\n", sayi, toplamN(sayi));
}

// ------------------------------------------------------------
// 8. Fibonacci Dizisi (Rekürsif)
// ------------------------------------------------------------
int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

void ornek8() {
    printf("\n--- Örnek 8 ---\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
}

// ------------------------------------------------------------
// Ana Fonksiyon - Tüm örnekleri çalıştır
// ------------------------------------------------------------
int main() {
    ornek1();
    ornek2();
    ornek3();
    ornek4();
    ornek5();
    ornek6();
    ornek7();
    ornek8();
    return 0;
}



































