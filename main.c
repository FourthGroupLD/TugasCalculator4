#include <stdio.h>

void splitBill() {
    float totalTagihan, perOrang;
    int jumlahOrang;

    printf("\n=== Kalkulator Split Bill / Patungan ===\n");

    printf("Masukkan total tagihan makan: Rp ");
    scanf("%f", &totalTagihan);

    printf("Masukkan jumlah orang: ");
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
