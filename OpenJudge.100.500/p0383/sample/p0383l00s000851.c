/*
AOJ - ITP1_7_d
Date: 20181002
Author: Mikoron * ♡mikoiwate♡
 */

#define MAX 100

#include<stdio.h>

int main(void) {
        short i, j, k, n, m, l;
        long nm[MAX][MAX], ml[MAX][MAX], nl[MAX][MAX];

        scanf("%hd %hd %hd", &n, &m, &l);


        //initialize
        for(i = 0; i < MAX; i++) {
                for(j = 0; j < MAX; j++) {
                        nm[i][j] = ml[i][j] = nl[i][j] = 0;
                }
        }

        //input
        for(i = 0; i < n; i++) {
                for(j = 0; j < m; j++) {
                        scanf("%ld", &nm[i][j]);
                }
        }

        for(i = 0; i < m; i++) {
                for(j = 0; j < l; j++) {
                        scanf("%ld", &ml[i][j]);
                }
        }

        //calc & output
        for(i = 0; i < n; i++) {
                for(j = 0; j < l; j++) {
                        for(k = 0; k < m; k++) {
                                nl[i][j] += nm[i][k] * ml[k][j];
                        }
                        if(j != l-1) printf("%ld ", nl[i][j]);
                        else printf("%ld", nl[i][j]);
                }
                printf("\n");
        }
        return 0;
}

