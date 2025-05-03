# Programlama-2
Bu repoda Akdeniz Üniversitesi EEM 1.Sınıf  programlama-2 ders notları ve çalışma soruları bulunmaktadır

# 📘 Programlama-2: Fonksiyonlar ve Rekürsiyon Notları  
📅 **Tarih:** 16.04.2025  
👨‍💻 **Dil:** C (C Programming Language)

Bu projede, C dili kullanılarak yazılmış çeşitli **fonksiyon örnekleri** ve **özyineleme (rekürsiyon)** uygulamaları bulunmaktadır. Her konu açıklamalı ve fonksiyonel şekilde örneklendirilmiştir. 
## 📌 İçindekiler
### 🔹 Fonksiyonlar
- 👋 Sabit isimle selamlama
- 🧑‍💻 Kullanıcıdan isim alarak selamlama
- ➗ Dizi içindeki sayıların ortalamasını hesaplama (2 versiyon)
### 🔹 Özyineleme (Rekürsiyon)
- 🧮 Faktöriyel hesaplama
- ➕ 1’den 100’e kadar sayıların toplamı
- 🔢 1’den n’e kadar sayıların toplamı (kullanıcılı)
- 🌀 Fibonacci dizisi hesaplama
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# 📘 Programlama-2: Struct, 3D Mesafe Hesaplama ve Veri Tipi Dönüşümü Ders Notları
📅 **Tarih:** 30.04.2025  
👨‍💻 **Dil:** C (C Programming Language)
Bu proje, C dili ile yazılmış temel yapı (struct), üç boyutlu düzlemde nokta arası mesafe hesaplama ve veri tipi dönüşümü konularını içermektedir.
## 📌 İçerik
### 1. Yapılarla Sabit Değer Atama
- `struct` yapısı tanımlanır ve sabit veriler atanır.
- Konsola yazdırılır.
### 2. Kullanıcıdan Girdi Alarak Yapı Kullanımı
- `scanf` fonksiyonu ile kullanıcıdan veri alınır.
- Girilen bilgiler yazdırılır.
### 3. 3 Öğrencinin Bilgisini Alıp Listeleme
- Kullanıcıdan 3 öğrenciye ait ad, yaş ve ortalama bilgileri alınır.
- Tüm veriler ekranda gösterilir.
### 4. 3 Boyutlu Düzlemde İki Nokta Arasındaki Mesafeyi Hesaplama
- Kullanıcıdan iki nokta alınır.
- Mesafe formülü:  
  \[
  \sqrt{(x2-x1)^2 + (y2-y1)^2 + (z2-z1)^2}
  \]
### 5. Veri Tipi Dönüştürme (int → float)
- Tam sayılar ondalıklı hale çevrilerek doğru sonuç elde edilir.
### 6. Veri Tipi Dönüştürme (float → int)
- Ondalıklı sayılar tam sayıya dönüştürülerek işlem yapılır.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# 📘 Programlama-2 7. Çalışma Soruları: Mayın Tarlası ve Hanoi Kuleleri Problemi
📅 **Tarih:** 03.05.2025  
👨‍💻 **Dil:** C (C Programming Language)

## 🧠 Amaç

Bu çalışma, temel C programlama konularını uygulamalı olarak pekiştirmek amacıyla hazırlanmıştır. İçeriğinde;

- Matris kullanımı  
- Rastgele sayı üretimi  
- Fonksiyon tanımlama ve çağırma  
- Özyineleme (Rekürsiyon)  

konularını içeren iki klasik problem yer almaktadır:

- 💣 Mayın Tarlası Oyunu (10x10)
- 🧠 Hanoi Kuleleri Problemi (Recursive)

---

## 📂 İçindekiler

### 🔹 Fonksiyonlar

- `mayinTarlasi()`  
  → 10x10'luk bir mayın tarlasına rastgele ve kurallara uygun şekilde 10 mayın yerleştirir.

- `hanoi(n, kaynak, hedef, gecici)`  
  → Verilen disk sayısı için özyinelemeli Hanoi algoritmasını çalıştırır ve adımları yazdırır.

---

## 🎮 Problem Açıklamaları

### 1. 💣 Mayın Tarlası (10x10)

- Program, 10x10 boyutlarında bir matris oluşturur.
- Başlangıçta tüm hücreler `'.'` karakteri ile doldurulur.
- Toplam **10 adet mayın** rastgele hücrelere yerleştirilir.
- Her **satır ve sütunda en fazla 3 mayın** olacak şekilde rastgele yerleştirme yapılır.
- Yerleştirme işleminde bu kurallar kontrol edilir.
- Sonuç olarak ortaya çıkan matris ekranda görüntülenir.

### 2. 🧠 Hanoi Kuleleri Problemi

- Kullanıcıdan disk sayısı alınır.
- A (kaynak), B (geçici) ve C (hedef) olmak üzere 3 çubuk kullanılır.
- Rekürsif algoritma kullanılarak Hanoi çözümü üretilir.
- Her adımda hangi diskin hangi çubuktan hangi çubuğa taşınacağı yazdırılır.
----------------------------------------------------------------------------------------------------------------------

# 📘 Programlama-2 8. Çalışma Soruları : Mayın Tarlası, Vektör ve Karmaşık Sayılar
📅 **Tarih:** 03.05.2025  
👨‍💻 **Dil:** C (C Programming Language)

## 🧠 Amaç

Bu çalışma, C programlama dilinde yapı (`struct`), matris kullanımı, rastgele sayı üretimi, fonksiyonlar ve temel matematiksel işlemleri uygulamalı olarak öğretmeyi hedefler. Program, kullanıcıya bir menü sunarak üç farklı işlemi gerçekleştirme imkanı tanır:

- 💣 Mayın Tarlası (10x10)
- 📐 3B Vektör İşlemleri
- 🔢 Karmaşık Sayılarla İşlemler

---

## 📂 İçindekiler

### 🔹 Fonksiyonlar

- `mayinTarlasi()`  
  → 10x10'luk bir matrise rastgele ve kurallara uygun şekilde mayın yerleştirir ve görüntüler.

- `vektorCarpimlari()`  
  → İki 3B vektör alarak skaler ve vektörel çarpımlarını hesaplar ve yazdırır.

- `karmaşıkSayilarIslemi()`  
  → İki karmaşık sayı alarak toplam ve çarpımlarını hesaplar ve yazdırır.

- `main()`  
  → Menü aracılığıyla kullanıcıya seçim yaptırır ve ilgili işlemi çalıştırır.

---

## 🎮 Problem Açıklamaları

### 1. 💣 Mayın Tarlası (10x10)

- Program 10x10 boyutlarında bir matris oluşturur.
- Başlangıçta tüm hücreler `'.'` karakteri ile doldurulur.
- Toplam 10 mayın, rastgele konumlara yerleştirilir.
- Her **satır ve sütunda en fazla 3 mayın** olacak şekilde kurallar uygulanır.
- Matris, yerleştirme sonrası ekranda görüntülenir.
- Bu sürümde kullanıcı girişli oyun kısmı değil, sadece kurallı mayın yerleşimi yer almaktadır.

---

### 2. 📐 3B Vektör İşlemleri

- Kullanıcıdan iki adet 3 boyutlu vektör (`x`, `y`, `z`) alınır.
- Skaler çarpım:  
 a · b = ax * bx + ay * by + az * bz

- Vektörel çarpım:  
a × b = (
    ay * bz - az * by,
    az * bx - ax * bz,
    ax * by - ay * bx
)
- Sonuçlar ayrı ayrı ekranda gösterilir.
---

### 3. 🔢 Karmaşık Sayılarla İşlemler

- Kullanıcıdan iki karmaşık sayı alınır (`gerçek` ve `sanal` kısımlar).
- Toplama işlemi:  
  \[
  (a + bi) + (c + di) = (a + c) + (b + d)i
  \]
- Çarpma işlemi:  
  \[
  (a + bi)(c + di) = (ac - bd) + (ad + bc)i
  \]
- İşlem sonuçları ekranda gösterilir.

---




