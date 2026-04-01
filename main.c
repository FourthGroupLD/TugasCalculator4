#include <stdio.h>

void kalkulatorBunga() {
    float saldoAwal, bunga, totalAkhir;

    printf("\n=== KALKULATOR BUNGA TABUNGAN SEDERHANA ===\n");
    printf("Masukkan saldo awal: Rp ");
    scanf("%f", &saldoAwal);

    printf("Masukkan bunga bulanan (%%): ");
    scanf("%f", &bunga);

    totalAkhir = saldoAwal + (saldoAwal * bunga / 100);

    printf("Total saldo tabungan setelah bunga: Rp %.2f\n", totalAkhir);
}

void kalkulatorDiskon() {
    float hargaAwal, persentaseDiskon, hargaAkhir, nominalDiskon;

    printf("\n=== KALKULATOR DISKON BELANJA ===\n");
    printf("Masukkan harga awal barang: Rp ");
    scanf("%f", &hargaAwal);

    printf("Masukkan persentase diskon (%%): ");
    scanf("%f", &persentaseDiskon);

    nominalDiskon = hargaAwal * (persentaseDiskon / 100.0);
    hargaAkhir = hargaAwal - nominalDiskon;

    printf("\n--- Rincian ---\n");
    printf("Harga Awal    : Rp %.2f\n", hargaAwal);
    printf("Potongan      : Rp %.2f\n", nominalDiskon);
    printf("Harga Akhir   : Rp %.2f\n", hargaAkhir);
    printf("=================================\n\n");
}

void splitBill() {
    float totalTagihan, perOrang;
    int jumlahOrang;

    printf("\n=== KALKULATOR SPLIT BILL / PATUNGAN ===\n");
    printf("Masukkan total tagihan makan: Rp ");
    scanf("%f", &totalTagihan);

    printf("Masukkan jumlah orang: ");
    scanf("%d", &jumlahOrang);

    if (jumlahOrang > 0) {
        perOrang = totalTagihan / jumlahOrang;
        printf("\n--- Rincian ---\n");
        printf("Total Tagihan : Rp %.2f\n", totalTagihan);
        printf("Jumlah Orang  : %d\n", jumlahOrang);
        printf("Per Orang     : Rp %.2f\n", perOrang);
        printf("=================================\n\n");
    } else {
        printf("\nJumlah orang tidak valid!\n\n");
    }
}

void kalkulatorSaku() {
    int uangSaku, pengeluaran, sisa;

    printf("\n=== KALKULATOR UANG SAKU ===\n");
    printf("Masukkan Uang Saku : Rp ");
    scanf("%d", &uangSaku);

    printf("Estimasi Total Pengeluaran Hari ini : Rp ");
    scanf("%d", &pengeluaran);

    sisa = uangSaku - pengeluaran;
    printf("Sisa uang saku adalah Rp %d\n", sisa);
}


int main() {
    int pilihan;

    printf("=====================================\n");
    printf("    KALKULATOR KEUANGAN MAHASISWA    \n");
    printf("=====================================\n");
    printf("Pilih Menu Helper:\n");
    printf("1. Discount Counter\n");
    printf("2. Split Bill\n");
    printf("3. Savings Interest\n");
    printf("4. Allowance Leftover\n");
    printf("5. Keluar\n");
    printf("=====================================\n");
    printf("Masukkan pilihan (1-5): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            kalkulatorDiskon();
            break;
        case 2:
            splitBill();
            break;
        case 3:
            kalkulatorBunga();
            break;
        case 4:
            kalkulatorSaku();
            break;
        case 5:
            printf("\nKeluar\n");
            break;
        default:
            printf("\nPilihan tidak valid!\n");
            break;
    }

    return 0;
}
