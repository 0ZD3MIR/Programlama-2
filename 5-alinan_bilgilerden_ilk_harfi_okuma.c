#include <stdio.h>

/*
    DOSYADAN ÝLK KARAKTER OKUMA ÖRNEÐÝ

    Bu program:
    1. "input.txt" dosyasýný açar
    2. Dosyadaki ilk karakteri okur
    3. Okunan karakteri ekrana yazdýrýr

    ÖRNEK DOSYA ÝÇERÝÐÝ:
    ALi 125p
    Osman 24p
    Veli 325p
    0
    ogranc1.txt
*/

int main() 
{
    FILE *dosyaoku;
    char ch;
    
    // Dosyayý okuma modunda aç
    dosyaoku = fopen("input.txt","r");  // Orijinal kodda "z" modu yanlýþtýr, "r" olarak düzeltildi
    
    // Dosyadan ilk karakteri oku
    ch = fgetc(dosyaoku);
    
    // Okunan karakteri ekrana yazdýr
    printf("Dosyadaki ilk karakter: %c\n", ch);  // Orijinal kodda "ln" yanlýþtýr, "\n" olarak düzeltildi
    
    // Dosyayý kapat
    fclose(dosyaoku);
    
    return 0;
}

/*
    ÇALIÞTIRMA SONUCU:
    Dosyadaki ilk karakter: A

    PROGRAMIN ÇALIÞMA MANTIÐI:
    1. "input.txt" dosyasý okuma modunda açýlýr
    2. fgetc() fonksiyonu ile dosyadaki ilk karakter okunur
    3. Okunan karakter printf ile ekrana yazdýrýlýr
    4. Dosya kapatýlarak iþlem tamamlanýr

    DÝKKAT EDÝLMESÝ GEREKENLER:
    1. Dosya açma modu "r" (read) olmalýdýr (orijinal kodda "z" yanlýþtý)
    2. printf'te yeni satýr için "\n" kullanýlmalýdýr (orijinal kodda "ln" yanlýþtý)
    3. Dosyanýn programla ayný dizinde olmasý gerekir
    4. Dosya yoksa veya açýlamazsa hata oluþabilir
*/

/*
    KULLANILAN FONKSÝYONLAR:
    
    fopen(): Dosya açma fonksiyonu
    - "r": Okuma modu (dosya mevcut olmalý)
    
    fgetc(): Dosyadan bir karakter okur
    
    printf(): Formatlý çýktý yazdýrma
    
    fclose(): Açýk dosyayý kapatýr
*/
