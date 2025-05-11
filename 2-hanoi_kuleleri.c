#include <stdio.h>  // Standart giri�/��k�� fonksiyonlar� i�in

/*
 * Hanoi Kuleleri problemini ��zen �zyinelemeli fonksiyon
 * n: Ta��nacak disk say�s�
 * kaynak: Disklerin ba�lang�� konumu (A kulesi)
 * hedef: Disklerin var�� konumu (C kulesi)
 * gecici: Ge�ici depo olarak kullan�lacak kule (B kulesi)
 */
void hanoi(int n, char kaynak, char hedef, char gecici) {
    // Temel durum: Sadece 1 disk varsa
    if (n == 1) {
        printf("Disk 1: %c'den %c'ye tasinir\n", kaynak, hedef);
        return;
    }
    
    // 1. Ad�m: n-1 diski kaynaktan ge�ici kuleye ta��
    hanoi(n - 1, kaynak, gecici, hedef);
    
    // 2. Ad�m: En alttaki diski kaynaktan hedefe ta��
    printf("Disk %d: %c'den %c'ye tasinir\n", n, kaynak, hedef);
    
    // 3. Ad�m: n-1 diski ge�ici kuleden hedefe ta��
    hanoi(n - 1, gecici, hedef, kaynak);
}

int main() {
    int disk_sayisi;
    
    printf("=== Hanoi Kuleleri Problemi ===\n");
    printf("Kac disk kullanmak istiyorsunuz? ");
    scanf("%d", &disk_sayisi);
    
    if (disk_sayisi <= 0) {
        printf("Gecersiz disk sayisi! L�tfen pozitif bir say� girin.\n");
        return 1;
    }
    
    printf("\nCozum Adimlari:\n");
    // A: Kaynak kule, C: Hedef kule, B: Ge�ici kule
    hanoi(disk_sayisi, 'A', 'C', 'B');
    
    return 0;
}
