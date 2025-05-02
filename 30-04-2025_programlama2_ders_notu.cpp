// ===============================================================
// Programlama-2 Dersi - 30/04/2025
// Konular: Yap�lar (struct), 3D Mesafe, Veri Tipi D�n���m�
// ===============================================================

#include<stdio.h>
#include<string.h>
#include<math.h>

// -----------------------------
// 1. Yap�larla Sabit De�er Atama
// -----------------------------
// bu fonksiyonda stdio.h ve string.h k�t�phaneleri kullan�lmaktad�r
void sabitDegerYapisi() {
    struct ogrenci {
        char ad[10];
        int yas;
        float orta;
    } kisi;

    strcpy(kisi.ad, "Deniz");
    kisi.yas = 20;
    kisi.orta = 3.25;

    printf("\n--- Sabit Deger Yapisi ---\n");
    printf("Ad: %s\n", kisi.ad);
    printf("Yas: %d\n", kisi.yas);
    printf("Ortalama: %.2f\n", kisi.orta);
}

// ----------------------------------
// 2. Yap�ya Kullan�c�dan Girdi Alma
// ----------------------------------
// bu fonksiyonda stdio.h ve string.h k�t�phaneleri kullan�lmaktad�r
void girisliYapi() {
    struct ogrenci {
        char ad[10];
        int yas;
        float orta;
    } kisi;

    printf("\n--- Kullanicidan Veri Alma ---\n");
    printf("Ogrencinin adini giriniz: ");
    scanf("%s", kisi.ad);

    printf("Yasini giriniz: ");
    scanf("%d", &kisi.yas);

    printf("Ortalama giriniz: ");
    scanf("%f", &kisi.orta);

    printf("Ogrencinin adi = %s\n", kisi.ad);
    printf("Ogrencinin yasi = %d\n", kisi.yas);
    printf("Ogrencinin ortalamasi = %.2f\n", kisi.orta);
}

// -------------------------------------------------------------
// 3. 3 Farkl� ��rencinin Bilgisini Al�p Yazd�rma
// -------------------------------------------------------------
// bu fonksiyonda stdio.h ve math.h k�t�phaneleri kullan�lmaktad�r 
void ucOgrenci() {
    struct ogrenci {
        char ad[10];
        int yas;
        float orta;
    } kisi[3];

    printf("\n--- 3 Ogrenci Bilgisi ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. ogrencinin adini girin: ", i + 1);
        scanf("%s", kisi[i].ad);
        printf("Yas: ");
        scanf("%d", &kisi[i].yas);
        printf("Ortalama: ");
        scanf("%f", &kisi[i].orta);
    }

    printf("\n--- Yazdiriliyor ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Ad: %s, Yas: %d, Ortalama: %.2f\n", kisi[i].ad, kisi[i].yas, kisi[i].orta);
    }
}

// -----------------------------------------------------------
// 4. 3D Uzayda �ki Nokta Aras�ndaki Mesafeyi Hesaplama
// -----------------------------------------------------------
// bu foksiyonda stdio.h ve math.h k�t�phaleri kullan�lm��t�r
void noktaMesafe() {
    struct nokta {
        float x, y, z;
    } x[2];

    float d1, d;

    printf("\n--- 3D Nokta Mesafe Hesabi ---\n");
    for (int i = 0; i < 2; i++) {
        printf("%d. noktayi giriniz (x y z): ", i + 1);
        scanf("%f %f %f", &x[i].x, &x[i].y, &x[i].z);
    }

    d1 = pow((x[0].x - x[1].x), 2) +
         pow((x[0].y - x[1].y), 2) +
         pow((x[0].z - x[1].z), 2);
    d = sqrt(d1);

    printf("Iki nokta arasindaki uzaklik: %.2f\n", d);
}

// --------------------------------------------
// 5. int -> float Veri Tipi D�n���m�
// --------------------------------------------
// bu foksiyonda sadece stdio.h k�t�phanesi kullan�lm��t�r
void intToFloat() {
    int a = 5, b = 2;
    printf("\n--- int -> float D�n���m ---\n");
    printf("Sonuc: %f\n", (float)a / (float)b);
}

// --------------------------------------------
// 6. float -> int Veri Tipi D�n���m�
// --------------------------------------------
// bu foksiyonda sadece stdio.h k�t�phanesi kullan�lm��t�r
void floatToInt() {
    float a = 5.1, b = 2.2;
    printf("\n--- float -> int D�n���m ---\n");
    printf("Sonuc: %f\n", (float)((int)a / (int)b));
}

// --------------------------------------------
// Ana Fonksiyon: T�m B�l�mleri �al��t�r�r
// --------------------------------------------
int main() {
    sabitDegerYapisi();
    girisliYapi();
    ucOgrenci();
    noktaMesafe();
    intToFloat();
    floatToInt();
    return 0;
}

