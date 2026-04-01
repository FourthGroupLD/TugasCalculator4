#include <stdio.h>

#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define WHT "\e[0;37m"
#define RESET "\e[0m"

void kalkulatorDiskon() {
    float hargaAwal, persentaseDiskon, hargaAkhir, nominalDiskon;

    printf(WHT "\n=== Kalkulator Diskon Belanja ===\n" RESET);

  
    printf(GRN "Masukkan harga awal barang:Rp." RESET);
    scanf("%f", &hargaAwal);
    
    
    printf(YEL "Masukkan persentase diskon (%%): " RESET);
    scanf("%f", &persentaseDiskon);

    
    nominalDiskon = hargaAwal * (persentaseDiskon / 100.0);
    hargaAkhir = hargaAwal - nominalDiskon;

    
    printf("\n--- Rincian ---\n");
    printf("Harga Awal    : Rp %.2f\n", hargaAwal);
    printf("Potongan      : Rp %.2f\n", nominalDiskon);
    printf(GRN "Harga Akhir yang harus dibayar: Rp %.2f\n" RESET, hargaAkhir);
    printf("=================================\n\n");
}
