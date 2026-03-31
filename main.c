#include <stdio.h>

void kalkulatorDiskon() {
    float hargaAwal, persentaseDiskon, hargaAkhir, nominalDiskon;

    printf("\n=== Kalkulator Diskon Belanja ===\n");

  
    printf("Masukkan harga awal barang:Rp.");
    scanf("%f", &hargaAwal);
    
    
    printf("Masukkan persentase diskon (%%): ");
    scanf("%f", &persentaseDiskon);

    
    nominalDiskon = hargaAwal * (persentaseDiskon / 100.0);
    hargaAkhir = hargaAwal - nominalDiskon;

    
    printf("\n--- Rincian ---\n");
    printf("Harga Awal    : Rp %.2f\n", hargaAwal);
    printf("Potongan      : Rp %.2f\n", nominalDiskon);
    printf("Harga Akhir yang harus dibayar: Rp %.2f\n", hargaAkhir);
    printf("=================================\n\n");
}
