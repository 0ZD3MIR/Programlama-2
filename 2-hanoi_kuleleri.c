// ===============================================================
// Programlama-2 Çalışma Soruları-7
// 2.Soru: Hanoi Kuleleri Problemi Özyineleme örneği araştırınız. 
// ===============================================================
#include <stdio.h>  // Standart giriş/çıkış fonksiyonları için
/*
 * Hanoi Kuleleri problemini çözen özyinelemeli fonksiyon
 * n: Taşınacak disk sayısı
 * kaynak: Disklerin başlangıç konumu (A kulesi)
 * hedef: Disklerin varış konumu (C kulesi)
 * gecici: Geçici depo olarak kullanılacak kule (B kulesi)
 */
void hanoi(int n, char kaynak, char hedef, char gecici) {
    // Temel durum: Sadece 1 disk varsa
    if (n == 1) {
        printf("Disk 1: %c'den %c'ye tasinir\n", kaynak, hedef);
        return;
    }
    
    // 1. Adım: n-1 diski kaynaktan geçici kuleye taşı
    hanoi(n - 1, kaynak, gecici, hedef);
    
    // 2. Adım: En alttaki diski kaynaktan hedefe taşı
    printf("Disk %d: %c'den %c'ye tasinir\n", n, kaynak, hedef);
    
    // 3. Adım: n-1 diski geçici kuleden hedefe taşı
    hanoi(n - 1, gecici, hedef, kaynak);
}

int main() {
    int disk_sayisi;
    
    printf("=== Hanoi Kuleleri Problemi ===\n");
    printf("Kac disk kullanmak istiyorsunuz? ");
    scanf("%d", &disk_sayisi);
    
    if (disk_sayisi <= 0) {
        printf("Gecersiz disk sayisi! Lütfen pozitif bir sayı girin.\n");
        return 1;
    }
    
    printf("\nCozum Adimlari:\n");
    // A: Kaynak kule, C: Hedef kule, B: Geçici kule
    hanoi(disk_sayisi, 'A', 'C', 'B');
    
    return 0;
}
