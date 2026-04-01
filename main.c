#include <stdio.h>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define RESET "\e[om"

void splitBill() {
    float totalTagihan, perOrang;
    int jumlahOrang;

    printf( CYN "\n=== Kalkulator Split Bill / Patungan ===\n" RESET );

    printf( RED "Masukkan total tagihan makan: Rp " RESET );
    scanf("%f", &totalTagihan);

    printf( GRN "Masukkan jumlah orang: " RESET );
    scanf("%d", &jumlahOrang);

    if (jumlahOrang > 0) {
        perOrang = totalTagihan / jumlahOrang;

        printf("\n--- Rincian ---\n");
        printf("Total Tagihan : Rp %.2f\n", totalTagihan);
        printf("Jumlah Orang  : %d\n", jumlahOrang);
        printf("Setiap orang harus membayar: Rp %.2f\n", perOrang);
        printf("=================================\n\n");
    } else {
        printf("\nJumlah orang tidak valid!\n\n");
    }
}
