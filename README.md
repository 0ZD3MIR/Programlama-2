# 🌱 14/05/2025 Programlama-2 Ders Notları 🌱

## 📘 Konu: C Dilinde Dosya İşlemleri — Tüm Temeller ve Uygulamalı Örnekler

📅 **Tarih:** 14.05.2025
💻 **Programlama Dili:** C

Bu doküman, C programlama dilinde **dosya işlemleri** konusunu öğrenmek ve pekiştirmek isteyen öğrenciler için hazırlandı. Her bir örnek, gerçek dünya senaryoları düşünülerek yazılmış ve satır satır açıklanmıştır. 🧑‍🏫

Dosya işlemleri, **veri kalıcılığı** sağlar. Bellek üzerindeki veriler program sonlandığında kaybolur, ancak dosya sistemine yazılan veriler kalıcıdır. Bu yüzden dosya işlemleri programlama dünyasında çok önemlidir! 💾

---

## 📂 İçindekiler

### 🔹1. Dosya Oluşturma ve Yazma ("w" Modu)

* [`1-dosya_yazma.c`](./1-dosya_yazma.c)
  ➕ Yeni dosya oluşturma ve sabit metin yazma işlemi

### 🔹2. Dosyaya Veri Ekleme ("a" Modu)

* [`2-isim_yazdirma.c`](./2-isim_yazdirma.c)
  👤 İsmin dosyaya her çalıştırıldığında eklenmesi

### 🔹3. Kullanıcıdan Alınan Bilgileri Dosyaya Yazma

* [`3-kullanici_bilgisi_kaydet.c`](./3-kullanici_bilgisi_kaydet.c)
  📝 Kullanıcıdan alınan ad ve yaş bilgisini dosyaya ekleme

### 🔹4. Okuma + Yazma: Dosyadan Okuyup Başka Dosyaya Yazma

* [`4-dosya_okuma_yazma.c`](./4-dosya_okuma_yazma.c)
  🔁 Dosyadaki veriyi ters çevirerek başka bir dosyaya yazma

### 🔹5. Dosyadaki İlk Karakteri Okuma

* [`5-ilk_karakter_okuma.c`](./5-ilk_karakter_okuma.c)
  🔍 `fgetc()` kullanımı ile ilk karakteri alma

### 🔹6. Satır Takibi ile Belirli Satırdan Karakter Alma

* [`6-ikinci_satir_karakter.c`](./6-ikinci_satir_karakter.c)
  🧭 Satır sayacı ile ikinci satırın ilk karakterini alma

### 🔹7. Dosyadan Satır Satır Karakter Okuma (Temiz Versiyon)

* [`7-bilgiler_dosyasi_satir_oku.c`](./7-bilgiler_dosyasi_satir_oku.c)
  ✅ Açılma kontrolü yapılmış daha sağlam yapı

### 🔹8. Çoklu Kullanıcı Verisi Girme ve Okuma (Sabit Sayı)

* [`8-bes_kayit_dosya.c`](./8-bes_kayit_dosya.c)
  👨‍👩‍👧‍👦 5 farklı kişinin bilgilerini yazma ve geri okuma

### 🔹9. Çoklu Kullanıcı Verisi Girme (Dinamik Sayı)

* [`9-n_kayit_oku.c`](./9-n_kayit_oku.c)
  🔢 Kullanıcının belirlediği sayıda veri girme ve okuma

### 🔹10. Belirli Sayıda Karakter Okuma (fgets ile)

* [`10-fgets_ile_karakter.c`](./10-fgets_ile_karakter.c)
  ✂️ Yalnızca 3 karakterlik veri okuma örneği

### 🔹11. Öğrenci Not Hesaplama ve Dosyaya Yazma

* [`11-not_hesapla_yazdir.c`](./11-not_hesapla_yazdir.c)
  🧮 Not hesaplama formülü ve dosyaya kayıt

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

✅ Dosya açıldıktan sonra `NULL` kontrolü yapmayı unutma:

```c
if (dosya == NULL) {
  printf("Dosya açılamadı!\n");
  return 1;
}
```

✅ `fgets` fonksiyonu, boşluk içeren veriler için daha uygundur:

```c
fgets(ad, sizeof(ad), stdin);  // Ad ve soyad birlikte alınabilir
```

✅ Her `fopen` işleminden sonra `fclose` ile dosyayı kapat!

✅ Dosya yollarında platforma göre dikkatli ol: Windows için `C:\\klasor\\dosya.txt`

---

## 🎯 Sonuç ve Önerilen Pratikler

Bu örneklerle:

* Dosya oluşturmayı öğrendin 🧾
* Yazma ve okuma işlemlerini deneyimledin ✍️
* Tek karakter okuma ve satır yönetimini gördün 🧮
* Formatlı veri işleme konularını pratik ettin 🧠

Şimdi yapman gereken şey şu: **Her bir örneği kendi ellerinle yaz, derle, çalıştır.**

💬 Sadece okumak yetmez, yazmadan öğrenmek mümkün değil! Kodla, hata yap, düzelt, öğren! 💪

Kodlarla kal! 👨‍💻👩‍💻✨

