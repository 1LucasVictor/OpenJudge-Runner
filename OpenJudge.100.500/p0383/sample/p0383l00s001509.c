#include <stdio.h>
int main(){
    int matrixA[100][100] = {0};
    int matrixB[100][100] = {0};
    long long int matrixC[100][100] = {0};
    int n, m ,l;
    scanf("%d %d %d",&n, &m, &l); //行列A,Bの大きさを入力
    
    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            scanf("%d",&matrixA[i][k]);  //行列A(n*m)の要素を入力
        }
    }
    
    for(int k=0; k<m; k++){
        for(int j=0; j<l; j++){
            scanf("%d",&matrixB[k][j]);  //行列B(m*l)の要素を入力
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<l; j++) {
            for(int k=0; k<m; k++){
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<l; j++) {
            printf("%lld", matrixC[i][j]);
            if(j!=l-1){
              putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}

