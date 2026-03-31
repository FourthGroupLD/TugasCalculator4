#include <stdio.h>

void kalkulatorBunga() {
    float saldoAwal, bunga, totalAkhir; 

    printf("\n=== KALKULATOR BUNGA TABUNGAN SEDERHANA ===\n");

    printf("Masukkan saldo awal: ");
    scanf("%f", &saldoAwal);

    printf("Masukkan bunga bulanan (%%): ");
    scanf("%f", &bunga);

    totalAkhir = saldoAwal + (saldoAwal * bunga / 100);

    printf("Total saldo tabungan setelah bunga: Rp %.2f\n", totalAkhir);
} 

int main() {
    int pilihan;

    printf("=== MENU UTAMA ===\n");
    printf("1. Diskon Belanja\n");
    printf("2. Split Bill\n");
    printf("3. Bunga Tabungan\n");
    printf("4. Sisa Uang Harian\n");
    printf("Pilih menu (1-4): ");
    scanf("%d", &pilihan);

    if (pilihan == 3) {
        kalkulatorBunga();
    }

    return 0;
}
