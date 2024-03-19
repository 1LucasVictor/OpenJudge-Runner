//
//  main.c
//  ITP1_7_D
//
//  Created by k16031kk on 2018/05/26.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, m, l, a, b;
    scanf("%d %d %d", &n, &m, &l);
    
    int A[n][m], B[m][l];
    long C[n][l];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            A[i][j]=0;
            scanf("%d", &a);
            A[i][j]=a;
        }
    }
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<l; j++) {
            B[i][j]=0;
            scanf("%d", &b);
            B[i][j]=b;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<l; j++) {
            C[i][j]=0;
            for(int k=0; k<m; k++)  {
                C[i][j]+=A[i][k]*B[k][j];
            }
            if(j!=0) printf(" ");
            printf("%ld", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

