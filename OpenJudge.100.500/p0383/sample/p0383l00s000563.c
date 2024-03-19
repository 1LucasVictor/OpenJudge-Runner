#include <stdio.h>
#include <stdlib.h>
/* #define debug */
int main(int argv, char *argc[]){
    long n, m, l;
    long i, j, k, row, line;
    unsigned long A[100][100], B[100][100], C[100][100];
    
    scanf("%ld %ld %ld\n", &n, &m, &l);
    #ifdef debug
        printf("debug-inputcheck:n=%ld m=%ld l=%ld\n", n, m ,l);
    #endif
    
    for(row=0; n>row; row++){
        for(line=0; m>line; line++){
            scanf("%lu", &A[row][line]);
        }
    }
    #ifdef debug
        printf("debug-Acheck:##########\n");
        for(row=0; n>row; row++){
            for(line=0; m>line; line++){
                printf("%lu ", A[row][line]);
            }
            printf("\n");
        }
        printf("debug-AcheckEnd:###########\n");
    #endif
    
    for(row=0; m>row; row++){
        for(line=0; l>line; line++){
            scanf("%lu", &B[row][line]);
        }
    }
    #ifdef debug
        printf("debug-Bcheck:##########\n");
        for(row=0; m>row; row++){
            for(line=0; l>line; line++){
                printf("%lu ", B[row][line]);
            }
            printf("\n");
        }
        printf("debug-BcheckEnd:###########\n");
    #endif
    
    
    /* 計算パート */
    for(i=0; n>i; i++){
        for(j=0; l>j; j++){
            for(k=0; m>k; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    
    /* 表示パート */
    for(i=0; n>i; i++){
        for(j=0; l>j; j++){
            printf("%lu", C[i][j]);
            if(l-1 == j) {printf("\n");}
            else printf(" ");
        }
    }
    return 0;
}