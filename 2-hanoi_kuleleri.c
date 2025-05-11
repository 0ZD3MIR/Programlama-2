#include <stdio.h>  // Standart giriþ/çýkýþ fonksiyonlarý için

/*
 * Hanoi Kuleleri problemini çözen özyinelemeli fonksiyon
 * n: Taþýnacak disk sayýsý
 * kaynak: Disklerin baþlangýç konumu (A kulesi)
 * hedef: Disklerin varýþ konumu (C kulesi)
 * gecici: Geçici depo olarak kullanýlacak kule (B kulesi)
 */
void hanoi(int n, char kaynak, char hedef, char gecici) {
    // Temel durum: Sadece 1 disk varsa
    if (n == 1) {
        printf("Disk 1: %c'den %c'ye tasinir\n", kaynak, hedef);
        return;
    }
    
    // 1. Adým: n-1 diski kaynaktan geçici kuleye taþý
    hanoi(n - 1, kaynak, gecici, hedef);
    
    // 2. Adým: En alttaki diski kaynaktan hedefe taþý
    printf("Disk %d: %c'den %c'ye tasinir\n", n, kaynak, hedef);
    
    // 3. Adým: n-1 diski geçici kuleden hedefe taþý
    hanoi(n - 1, gecici, hedef, kaynak);
}

int main() {
    int disk_sayisi;
    
    printf("=== Hanoi Kuleleri Problemi ===\n");
    printf("Kac disk kullanmak istiyorsunuz? ");
    scanf("%d", &disk_sayisi);
    
    if (disk_sayisi <= 0) {
        printf("Gecersiz disk sayisi! Lütfen pozitif bir sayý girin.\n");
        return 1;
    }
    
    printf("\nCozum Adimlari:\n");
    // A: Kaynak kule, C: Hedef kule, B: Geçici kule
    hanoi(disk_sayisi, 'A', 'C', 'B');
    
    return 0;
}
