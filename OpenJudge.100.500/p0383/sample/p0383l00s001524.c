#include <stdio.h>
 
int main(){
     
    int a, b, c, i, j, k;
    int A[100][100], B[100][100];
    long int C[100][100], hoge = 0;
     
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
     
    for(i = 0; i < a; ++i){
        for(j = 0; j < b; ++j){
             
            scanf("%d",&A[i][j]);
        }
    }
     
    for(i = 0; i < b; ++i){
        for(j = 0; j < c; ++j){
             
            scanf("%d",&B[i][j]);
        }
    }
     
     
    for(i = 0; i < a; ++i){
        for(j = 0; j < c; ++j){
            for(k = 0; k < b; ++k){
                 
                hoge += (A[i][k] * B[k][j]);
            }
            C[i][j] = hoge;
            hoge = 0;
        }
    }
     
    for(i = 0; i < a; ++i){
        for(j = 0; j < c; ++j){
             
            if(j == 0){
                printf("%ld",C[i][j]);
            }
            else{
                printf(" %ld",C[i][j]);
            }
        }
        printf("\n");
    }
     
    return 0;
}

