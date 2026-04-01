#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

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
