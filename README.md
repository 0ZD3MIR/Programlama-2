# 🌱 14/05/2025 Programlama-2 Ders Notları 🌱

## 📘 Konu: C Dilinde Dosya İşlemleri — Tüm Temeller ve Uygulamalı Örnekler

📅 **Tarih:** 14.05.2025
💻 **Programlama Dili:** C

Bu doküman, C programlama dilinde **dosya işlemleri** konusunu öğrenmek ve pekiştirmek isteyen öğrenciler için hazırlandı. Her bir örnek, gerçek dünya senaryoları düşünülerek yazılmış ve satır satır açıklanmıştır. 🧑‍🏫

Dosya işlemleri, **veri kalıcılığı** sağlar. Bellek üzerindeki veriler program sonlandığında kaybolur, ancak dosya sistemine yazılan veriler kalıcıdır. Bu yüzden dosya işlemleri programlama dünyasında çok önemlidir! 💾

---

## 📂 İçindekiler (GitHub Dosya Adlarına Göre)

### 🔹1. Dosya Yazma Örneği

* [`1-dosya_islemleri.c`](./1-dosya_islemleri.c)
  ➕ "ornek.txt" adlı dosyaya sabit içerik yazma örneği

### 🔹2. İsmini Dosyaya Yazdırma

* [`2-kendi_ismini_dosyaya_yazdirma.c`](./2-kendi_ismini_dosyaya_yazdirma.c)
  👤 "Deniz" adını her çalıştırıldığında dosyaya ekleme

### 🔹3. Kullanıcı Bilgilerini Dosyaya Kaydetme

* [`3-kullanici_bilgilerini_dosyaya_kaydetme.c`](./3-kullanici_bilgilerini_dosyaya_kaydetme.c)
  📝 Kullanıcıdan alınan isim ve yaş bilgilerini dosyaya ekleme

### 🔹4. Fonksiyonlu Formatlı Yazma

* [`4-fonksiyonlu_formatli_yazma.c`](./4-fonksiyonlu_formatli_yazma.c)
  🔁 Dosyadan veri okuyup başka dosyaya farklı sırayla yazma

### 🔹5. Alınan Bilgilerden İlk Harfi Okuma

* [`5-alinan_bilgilerden_ilk_harfi_okuma.c`](./5-alinan_bilgilerden_ilk_harfi_okuma.c)
  🔍 Dosyadan ilk karakteri fgetc() ile okuma

### 🔹6. İkinci Satırdaki İlk Karakteri Okuma

* [`6-alinan_bilgilerden_ikinci_satirdaki_tek_karakteri_okuma.c`](./6-alinan_bilgilerden_ikinci_satirdaki_tek_karakteri_okuma.c)
  🧭 Satır sayımı ile ikinci satırın başındaki karakteri yazdırma

### 🔹7. Satır Okuma Yöntem 2 (Alternatif Yaklaşım)

* [`7-ikinci_satir_okuma_yontem2.c`](./7-ikinci_satir_okuma_yontem2.c)
  ✅ Açılma kontrolü yapılmış versiyon ile 2. satır okuma

### 🔹8. Karakter Kadar Değer Okuma

* [`8-ekrandan_girilen_karakter_kadar_deger_okuyup_yazdirma.c`](./8-ekrandan_girilen_karakter_kadar_deger_okuyup_yazdirma.c)
  👨‍👩‍👧‍👦 5 kişilik veri girip dosyaya yazma ve okuma

### 🔹9. n Tane Bilgi Okuma ve Yazma

* [`9-n_tane_bilgi_okuma_ve_yazma.c`](./9-n_tane_bilgi_okuma_ve_yazma.c)
  🔢 Kullanıcının belirlediği kadar kayıt girip okuma

### 🔹10. Dizi Okuma Örneği (fgets ile)

* [`10-dizi_okuma_ornegi.c`](./10-dizi_okuma_ornegi.c)
  ✂️ Sadece belirli sayıda karakteri okuma

### 🔹11. Not Hesaplama

* [`11-ornek_soru.c`](./11-ornek_soru.c)
  🧮 Öğrencilerin vize/final notlarını okuyup dönem notu hesaplama
  
---

## 🔍 Temel Kavramlar — Detaylı Açıklamalar

### 📂 Dosya Açma Modları (Çok Önemli!)

| Mod  | Açıklama                                                    |
| ---- | ----------------------------------------------------------- |
| "r"  | Sadece okuma (dosya varsa açar, yoksa `NULL` döner)         |
| "w"  | Yazma (dosya varsa siler, yoksa oluşturur)                  |
| "a"  | Ek olarak yazma (dosya varsa sonuna yazar, yoksa oluşturur) |
| "r+" | Okuma + yazma (dosya varsa açar, yoksa `NULL` döner)        |
| "w+" | Okuma + yazma (dosya varsa silinir, yoksa oluşturulur)      |
| "a+" | Okuma + ekleme (dosya varsa sonuna yazar, yoksa oluşturur)  |

⚠️ `w`, `w+` modları tehlikelidir çünkü dosya içeriğini SİLER! Bu yüzden dikkatli kullan! ⚠️

---

## 💬 Kullanılan Fonksiyonlar ve Görevleri

### 🔹 `fopen()`

📂 Dosya açmak için kullanılır. Mod belirtilmelidir.
Örnek: `fopen("dosya.txt", "r");`

### 🔹 `fprintf()`

📝 Dosyaya formatlı veri yazmak için kullanılır.
Örnek: `fprintf(dosya, "%s %d", ad, yas);`

### 🔹 `fscanf()`

📥 Dosyadan formatlı veri okumak için kullanılır.
Örnek: `fscanf(dosya, "%s %d", ad, &yas);`

### 🔹 `fgetc()`

🔡 Dosyadan bir karakter okur.
Örnek: `char ch = fgetc(dosya);`

### 🔹 `fgets()`

📜 Dosyadan bir satırı (veya belirli karakter sayısını) okur.
Örnek: `fgets(satir, 30, dosya);`

### 🔹 `fclose()`

🛑 Açılan dosyayı kapatır. Her `fopen`'den sonra kullanılmalıdır!

---

## 🧠 İpuçları ve Tavsiyeler

✅ `fgets` fonksiyonu, boşluk içeren veriler için daha uygundur:

```c
fgets(ad, sizeof(ad), stdin);  // Ad ve soyad birlikte alınabilir
```

✅ Her `fopen` işleminden sonra `fclose` ile dosyayı kapat!

✅ Dosya yollarında platforma göre dikkatli ol: Windows için `C:\\klasor\\dosya.txt`

---

## 🎯 Sonuç ve Önerilen Pratikler

Bu örneklerle:

* Dosya oluşturmayı öğrendik 🧾
* Yazma ve okuma işlemlerini deneyimledik ✍️
* Tek karakter okuma ve satır yönetimini gördük 🧮
* Formatlı veri işleme konularını pratik ettik 🧠

Şimdi yapman gereken şey şu: **Her bir örneği kendi ellerinle yaz, derle, çalıştır.**

💬 Sadece okumak yetmez, yazmadan öğrenmek mümkün değil! Kodla, hata yap, düzelt, öğren! 💪


