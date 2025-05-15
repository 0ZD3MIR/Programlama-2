#include <stdio.h>

/*
    DOSYADAN İLK KARAKTER OKUMA ÖRNEĞİ

    Bu program:
    1. "input.txt" dosyasını açar
    2. Dosyadaki ilk karakteri okur
    3. Okunan karakteri ekrana yazdırır

    ÖRNEK DOSYA İÇERİĞİ:
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
    
    // Dosyayı okuma modunda aç
    dosyaoku = fopen("input.txt","r");  
    
    // Dosyadan ilk karakteri oku
    ch = fgetc(dosyaoku);
    
    // Okunan karakteri ekrana yazdır
    printf("Dosyadaki ilk karakter: %c\n", ch);  
    
    // Dosyayı kapat
    fclose(dosyaoku);
    
    return 0;
}

/*
    ÇALIŞTIRMA SONUCU:
    Dosyadaki ilk karakter: A

    PROGRAMIN ÇALIŞMA MANTIĞI:
    1. "input.txt" dosyası okuma modunda açılır
    2. fgetc() fonksiyonu ile dosyadaki ilk karakter okunur
    3. Okunan karakter printf ile ekrana yazdırılır
    4. Dosya kapatılarak işlem tamamlanır

    DİKKAT EDİLMESİ GEREKENLER:
    1. Dosya açma modu "r" (read) olmalıdır (orijinal kodda "z" yanlıştı)
    2. printf'te yeni satır için "\n" kullanılmalıdır (orijinal kodda "ln" yanlıştı)
    3. Dosyanın programla aynı dizinde olması gerekir
    4. Dosya yoksa veya açılamazsa hata oluşabilir
*/

/*
    KULLANILAN FONKSİYONLAR:
    
    fopen(): Dosya açma fonksiyonu
    - "r": Okuma modu (dosya mevcut olmalı)
    
    fgetc(): Dosyadan bir karakter okur
    
    printf(): Formatlı çıktı yazdırma
    
    fclose(): Açık dosyayı kapatır
*/
