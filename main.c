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

void kalkulatorK(){
    int uangSaku, pengeluaran, sisa;
    char benda[10];

    printf(GRN "\n=== KALKULATOR SISA UANG JAJAN ===\n\n" RESET); 

    printf(BLU "Masukkan Uang Saku : " RESET);
    scanf("%d", &uangSaku);

    printf("Estimasi Total Pengeluaran Hari ini :");
    scanf("%d", &pengeluaran);

    if (uangSaku<pengeluaran){
        printf("Pengeluaran melebihi Uang Saku\n");
    }
    else {
        sisa=uangSaku-pengeluaran;
        printf("sisa uang saku adalah %d\n", sisa);
    }

}

int main (){
    kalkulatorK ();
    return 0;
}
