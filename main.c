#include <stdio.h>

void kalkulatorK(){
    int uangSaku, pengeluaran, sisa;
    char benda[10];

    printf("Masukkan Uang Saku : ");
    scanf("%d", &uangSaku);

    printf("Estimasi Total Pengeluaran Hari ini :");
    scanf("%d", &pengeluaran);

    if (uangSaku<pengeluaran){
        printf("Pengeluaran melebihi Uang Saku");
    }
    else {
        sisa=uangSaku-pengeluaran;
        printf("sisa uang saku adalah %d", sisa);
    }

}

int main (){
    kalkulatorK ();
    return 0;
}