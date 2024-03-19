#include <stdio.h>
int main(void){
    int n, m, i, j, x;
    scanf("%d %d\n", &n, &m);
    int A[100][100]={}, B[100]={}, C[100]={};
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &x);
            A[i][j]=x;
        }
    }
    
    for(j=0; j<m; j++){
        scanf("%d", &x);
        B[j]=x;
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            C[i]=C[i]+A[i][j]*B[j];
        }
        printf("%d\n", C[i]);
    }
    return 0;
}
