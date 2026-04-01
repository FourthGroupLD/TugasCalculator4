#include <stdio.h>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define RESET "\e[0m"

void kalkulatorBunga() {
    float saldoAwal, bunga, totalAkhir; 

    printf(GRN "========================================\n" RESET);
    printf(YEL "    KALKULATOR BUNGA TABUNGAN SEDERHANA    \n" RESET);
    printf(GRN "========================================\n" RESET);
    printf("Masukkan saldo awal: ");
    scanf("%f", &saldoAwal);

    printf("Masukkan bunga bulanan (%%): ");
    scanf("%f", &bunga);

    totalAkhir = saldoAwal + (saldoAwal * bunga / 100);

    printf("Total saldo tabungan setelah bunga: Rp %.2f\n", totalAkhir);
}



int main() {
    int pilihan;

    printf(GRN "=====================================\n" RESET);
    printf(YEL "    KALKULATOR KEUANGAN MAHASISWA    \n" RESET);
    printf(GRN "=====================================\n" RESET);
    printf(BLU "Pilih Menu Helper:\n" RESET);
    printf("1. Discount Counter\n");
    printf("2. Split Bill\n");
    printf("3. Savings Interest\n");
    printf("4. Allowance Leftover\n");
    printf("5. Keluar\n");
    printf(GRN "=====================================\n" RESET);
    printf(BLU "Masukkan pilihan (1-5): " RESET);
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 3:
            kalkulatorBunga();
            break;
    }

    return 0;
}
