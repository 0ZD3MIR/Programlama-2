# 🌱 Programlama-2 Çalışma Soruları - 7 🌱

## 📘 Programlama-2: Uygulamalı Problem Çözme - Rastgelelik & Özyineleme  
📅 **Tarih:** 12.05.2025  
💻 **Dil:** C Programlama Dili  

Bu branchde, C programlama dilinde algoritmik düşünmeyi ve farklı programlama tekniklerini (rastgelelik, özyineleme gibi) uygulamalı olarak gösteren iki temel problem yer almaktadır:

- **Mayın Tarlası Problemi**  
- **Hanoi Kuleleri Problemi**

---

## 📂 İçindekiler

### 🔹1. Mayın Tarlası Oluşturma (`mayin_tarlasi.c`)
- 10x10 boyutunda bir mayın tarlası oluşturulması.
- Satır ve sütun başına en fazla 3 mayın olacak şekilde toplam 10 mayın yerleştirme.
- Matris üzerinde rastgele mayın yerleştirme algoritması.

### 🔹2. Hanoi Kuleleri Problemi (`hanoi_kuleleri.c`)
- Kullanıcıdan alınan disk sayısına göre çözüm üreten özyinelemeli algoritma.
- A, B, C kuleleri arasında kurallara uygun taşıma.
- Her taşıma adımı ayrıntılı olarak ekrana yazdırılır.

---

## 🔹 1. `mayin_tarlasi.c` — **Mayın Tarlası Problemi**

### 📌 Amaç:
10x10 boyutunda bir mayın tarlası oluşturmak ve ekrana yazdırmak. Her satırda ve sütunda en fazla 3 mayın olacak şekilde **toplam 10 mayın** rastgele yerleştirilir.

### 📌 Kullanılan Yapılar:
- `char m[10][10]` : Mayın tarlasını temsil eden karakter matrisi.
- `int row[10]` ve `int col[10]` : Her satır ve sütundaki mayın sayısını takip eden diziler.
- `srand(time(0))` : Rastgele sayı üretimini her çalıştırmada farklı hale getirmek için zaman temelli seed kullanımı.

### 🔁 Algoritma Adımları:
1. Tüm matris noktaları önce `'.'` karakteri ile boş olarak işaretlenir.
2. `while (mines < 10)` döngüsü ile mayınlar tek tek rastgele hücrelere yerleştirilir.
3. Aynı hücreye mayın yerleştirilmemesi ve satır/sütun sınırlamalarına dikkat edilir.
4. İşlem tamamlandığında matris terminale yazdırılır.
---

---

## 🔹 2. `hanoi_kuleleri.c` — **Hanoi Kuleleri Problemi**

### 📌 Amaç:
Kullanıcının belirttiği sayıda diski, kurallara uygun şekilde A kulesinden C kulesine taşımak. Taşıma sırasında sadece bir disk hareket ettirilebilir ve küçük diskler büyük disklerin üzerine konamaz.

### 📌 Kullanılan Yapılar:
- Özyinelemeli `hanoi()` fonksiyonu: Diskleri taşımak için çağrılan temel fonksiyon.
- `scanf()` ile kullanıcıdan disk sayısının alınması.
- `printf()` ile her taşıma adımının kullanıcıya gösterilmesi.

### 🔁 Algoritma Adımları:
1. Kullanıcıdan disk sayısı alınır.
2. Geçerli bir değer girildiyse `hanoi()` fonksiyonu çağrılır.
3. Özyineleme şu şekilde işler:
   - Eğer `n == 1`: Diski doğrudan taşır.
   - Aksi halde:
     - `n-1` diski kaynak’tan geçici kuleye taşır.
     - En büyük diski kaynak’tan hedef’e taşır.
     - `n-1` diski geçici’den hedef’e taşır.
----------
## ✅ Kazanımlar

|       Problem       |Öğrenilen Konular |
|---------------------|-------------------|
|  **Mayın Tarlası**  | Rastgele sayı üretimi, matris işlemleri, koşullu kontroller, dizilerle sınırlama kontrolü |
|  **Hanoi Kuleleri** | Özyinelemeli fonksiyonlar, algoritma mantığı, problemi adımlara ayırma ve izleme |

---

## 💬 Notlar
- Her iki problem, temel algoritma geliştirme ve soyut düşünme becerilerini geliştirmeye yöneliktir.
- Özellikle **Hanoi Problemi**, özyinelemenin nasıl çalıştığını anlamak için ideal bir klasik problemdir.
- **Mayın Tarlası** problemi ise rastgelelik ve kontrol yapılarını pekiştirir.






