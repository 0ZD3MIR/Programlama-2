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

- # 📘 Programlama-2 7. Çalışma: Mayın Tarlası ve Hanoi Kuleleri Problemi
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


