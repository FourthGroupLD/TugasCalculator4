#include <stdio.h>

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
    printf("=====================================\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("\n[Discount Counter]\n");
            printf("contoh\n");
            break;

        case 2:
            printf("\n[Split Bill]\n");
            printf("contoh\n");
            break;

        case 3:
            printf("\n[Savings Interest]\n");
            printf("contoh\n");
            break;

        case 4:
            printf("\n[Allowance Leftover]\n");
            printf("contoh\n");
            break;

        default:
            printf("\nPilihan tidak valid!\n");
            break;
    }

    return 0;
}
