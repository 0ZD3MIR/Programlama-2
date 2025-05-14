# 🌱 14/05/2025 Programlama-2 Ders Notlari 🌱

## 📘 Programlama-2: Dosya Islemleri Ornekleri ve Açiklamalari

📅 **Tarih:** 14.05.2025
💻 **Dil:** C Programlama Dili

Bu brachde, C dilinde dosya islemleri konusunu örneklerle ele alacagiz. Dosya olusturma, yazma, okuma, karakter karakter isleme gibi temel işlemler uygulamali olarak gösterilecektir. ✍️🗂️
Her örnek, günlük hayatta kullanilabilecek senaryolar üzerinden yapilandirilmis olup bol bol pratik içerir. 💡

---

## 📂 İçindekiler

### 🔹1. Dosya Yazma ("w" Modu)

* [`1-dosya_yazma.c`](./1-dosya_yazma.c)
  "ornek.txt" dosyasina sabit metin yazilmasi

### 🔹2. İsmini Dosyaya Yazdırma ("a" Modu)

* [`2-isim_yazdirma.c`](./2-isim_yazdirma.c)
  Sabit bir ismin "text.txt" dosyasina eklenmesi

### 🔹3. Kullanici Bilgisi Kaydetme

* [`3-kullanici_bilgisi_kaydet.c`](./3-kullanici_bilgisi_kaydet.c)
  Kullanici girdisiyle isim ve yas bilgisinin dosyaya eklenmesi

### 🔹4. Dosyadan Veri Okuyup Yeni Dosyaya Yazma

* [`4-dosya_okuma_yazma.c`](./4-dosya_okuma_yazma.c)
  "dosya\_oku.txt" dosyasindan okunan verinin "dosya\_yaz.txt" dosyasina ters sirayla yazilmasi

### 🔹5. İlk Karakteri Okuma

* [`5-ilk_karakter_okuma.c`](./5-ilk_karakter_okuma.c)
  Dosyadaki ilk karakterin fgetc() ile okunmasi ve yazdirilmasi

### 🔹6. 2. Satirin İlk Karakterini Okuma

* [`6-ikinci_satir_karakter.c`](./6-ikinci_satir_karakter.c)
  Bilgi dosyasindan 2. satirin ilk karakterinin okunmasi

### 🔹7. Kullanıcı Bilgileriyle Satir Okuma

* [`7-bilgiler_dosyasi_satir_oku.c`](./7-bilgiler_dosyasi_satir_oku.c)
  2 satirlik dosyadan 2. satirin ilk karakterini fgetc ile alma

### 🔹8. 5 Kullanici Bilgisini Kaydetme ve Okuma

* [`8-bes_kayit_dosya.c`](./8-bes_kayit_dosya.c)
  5 kisilik veri girisi yapilip dosyaya yazilir, sonra okunur

### 🔹9. N Kadar Kullanici Kayit Islemi

* [`9-n_kayit_oku.c`](./9-n_kayit_oku.c)
  Kullanici belirledigi kadar veri girisi yapar ve kayitlar dosyadan okunur

### 🔹10. fgets ile Belirli Sayida Karakter Okuma

* [`10-fgets_ile_karakter.c`](./10-fgets_ile_karakter.c)
  Dosyadan sadece belirli sayida karakter okunmasi

### 🔹11. Not Hesaplama ve Kaydetme

* [`11-not_hesapla_yazdir.c`](./11-not_hesapla_yazdir.c)
  Öğrenci notlari hesaplanarak yeni dosyaya yazilir

---

## 💡 Detayli Açiklamalar ve Calisma Mantiklari

### 🔹 `1-dosya_yazma.c`

📝 "w" modu ile dosya olusturulur ve sabit metinler yazilir. Daha önce varsa icerigi silinir.
✨ Kullanilan fonksiyonlar: `fopen`, `fprintf`, `fclose`

### 🔹 `2-isim_yazdirma.c`

👤 Sabit "Deniz" ismi "text.txt" dosyasina eklenir. "a" modu kullanilarak mevcut icerik silinmez.

### 🔹 `3-kullanici_bilgisi_kaydet.c`

🧑‍💻 Kullaniciya ad ve yas bilgisi sorulur, bilgiler "kullanici\_bilgileri.txt" dosyasina eklenir.

### 🔹 `4-dosya_okuma_yazma.c`

🔁 Bir dosyadan isim ve numara okunur, diger dosyaya ters sirada yazilir (no - ad).
📥📤 I/O islemleri pratiği!

### 🔹 `5-ilk_karakter_okuma.c`

🔎 Dosyadan ilk karakter fgetc ile okunur ve yazdirilir. Temel karakter okuma örneği.

### 🔹 `6-ikinci_satir_karakter.c`

👁️‍🗨️ Yazilan dosya tekrar okunarak, 2. satirin ilk karakteri yakalanip ekrana basilir. `fgetc` + `\n` sayaci kullanilir.

### 🔹 `7-bilgiler_dosyasi_satir_oku.c`

👨‍🏫 2 satirlik dosya yazildiktan sonra 2. satirin ilk karakteri bulunur. Daha sade ve güvenli haliyle sunulmustur.

### 🔹 `8-bes_kayit_dosya.c`

👪 5 defa ad ve yas bilgisi alinir, dosyaya yazilir ve sonra satir satir ekrana basilir. Kullanici alistirmasi icin birebir!

### 🔹 `9-n_kayit_oku.c`

📊 Kullaniciya kac kayit girilecegi sorulur, her biri dosyaya yazilir ve sonra okuma islemi yapilir.

### 🔹 `10-fgets_ile_karakter.c`

✂️ Dosyadan sadece belirli uzunlukta karakter okunur. `fgets` fonksiyonunun sinirlayici yapisi örneklenir.

### 🔹 `11-not_hesapla_yazdir.c`

📚 "ogrenoi.txt" dosyasindaki sinav notlari okunur, donem sonu notu hesaplanir ve yeni dosyaya yazilir.
📐 Formül: `not = vize1 * 0.25 + vize2 * 0.25 + final * 0.5`

---

## 🧠 Notlar ve İpuçlari

✅ Her `fopen` islemi sonunda `NULL` kontrolü yapilmalidir! 📛
✅ Dosya islemlerinde `fclose` kullanmak unutulmamalidir! 🛑
✅ Formatli okuma/yazma icin `fprintf`, `fscanf`, `fgets`, `fgetc` fonksiyonlari bilinmelidir! 📄
✅ `"w"`, `"a"`, `"r"` gibi modlarin ne anlama geldigini iyi kavrayin! 🔄
✅ Gercek uygulamalarda `fgets` gibi fonksiyonlar, bosluklu veriler icin daha uygundur! 🧩

---

## 🎯 Sonuç

Bu örneklerle dosya işlemleri konusuna dair temel ve orta düzey uygulamalari detayli bir sekilde öğrendik.
Kodlari tekrar tekrar calistirarak, dosya yönetimi konusundaki pratik yeteneginizi arttirabilirsiniz. 🚀


