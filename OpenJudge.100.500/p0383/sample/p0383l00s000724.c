#include<stdio.h>

int main(void){
    int n, m, l;
    int A[100][100], B[100][100];
    long int C[100][100] = {};
    scanf("%d %d %d", &n, &m, &l);
    for(int i=0; i<n; i++){
        for(int j=0; j<m ;j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<l ;j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<l ;j++){
            for(int k=0; k<m; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
            printf("%ld", C[i][j]);
            if(j == l-1){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }
}
