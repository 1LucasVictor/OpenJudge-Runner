#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int L, R;
    int Lmod, Rmod, min, tmp;
    
    scanf("%d %d", &L, &R);
    Lmod = L % 2019;
    Rmod = R % 2019;


    min = (Lmod * Rmod) % 2019;
    for (int i=Lmod;i<Lmod+2019 && (L+i-Lmod)<R;i++) {
        for (int j=i+1;j<i+2020 && (L+j-Lmod)<=R;j++) {
            tmp = (i * j) % 2019;
            //printf("%d %d   %d %d   %d ", L+i-Lmod, L+j-Lmod, i, j, tmp);
            if (tmp < min) {
                min = tmp;
                //printf("*\n");
            } else {
                //printf("\n");
            }
        }
        if (min == 0)
            break;
    }
    
    //printf("--------\n");

    printf("%d", min);
    return 0;
}