#include <stdio.h>

/*
    DOSYADAN DÝZÝ OKUMA ÖRNEÐÝ (fgets KULLANIMI)

    Bu program:
    1. "input.txt" dosyasýný açar
    2. fgets() fonksiyonu ile dosyadan belirtilen sayýda karakter okur
    3. Okunan dizgiyi ekrana yazdýrýr

    ÖRNEK DOSYA ÝÇERÝÐÝ:
    ALÝ 125°
    Osman 243°
    Yoll 23°
    egrend.txt
*/

int main() 
{
    FILE *dosyaoku;
    char st1[30];
    
    // Dosyayý okuma modunda aç
    dosyaoku = fopen("input.txt","r");  // Orijinal kodda "z" modu yanlýþtýr, "r" olarak düzeltildi
    
    // Dosyadan 4 karakter oku (3 karakter + null karakter)
    fgets(st1, 4, dosyaoku);
    
    // Okunan dizgiyi ekrana yazdýr
    printf("st1: %s\n", st1);
    
    // Dosyayý kapat
    fclose(dosyaoku);
    
    return 0;
}

/*
    ÇALIÞTIRMA SONUCU:
    st1: ALÝ

    PROGRAMIN ÇALIÞMA MANTIÐI:
    1. "input.txt" dosyasý okuma modunda açýlýr
    2. fgets() fonksiyonu ile dosyadan en fazla 3 karakter okunur (4. karakter null karakter için)
    3. Okunan dizgi printf ile ekrana yazdýrýlýr
    4. Dosya kapatýlarak iþlem tamamlanýr

    FGETS FONKSÝYONU:
    - Parametreler: (dizi, okunacak_max_karakter_sayýsý, dosya_pointer)
    - Okuma iþlemi:
      * Belirtilen karakter sayýsý-1 kadar okur
      * Son karakter olarak null karakter ('\0') ekler
      * Satýr sonu (\n) karakteri görürse okumayý durdurur
    - Geri dönüþ deðeri:
      * Okuma baþarýlýysa dizginin adresi
      * Hata veya dosya sonu NULL
*/

/*
    DÝKKAT EDÝLMESÝ GEREKENLER:
    1. Dosya açma modu "r" (read) olmalýdýr
    2. fgets'in ikinci parametresi dizi boyutunu aþmamalýdýr
    3. Okunan dizgi sonunda otomatik olarak null karakter eklenir
    4. Dosya yoksa veya açýlamazsa hata oluþabilir
    5. Örnekte 4 parametresi verildiði için 3 karakter okunacaktýr
*/

/*
    ÖRNEK DOSYA YAPISI:
    input.txt içeriði:
    ALÝ 125°
    Osman 243°
    Yoll 23°
    egrend.txt
    
    Çýktý:
    st1: ALÝ  (ilk 3 karakter)
*/
