#include <stdio.h>
int main(void){
    int A[100][100];
    int B[100][100];
    int C[100][100]={0};
    int i, j, m, n, l, k;
    
    scanf("%d %d %d",&n, &m, &l);
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    for(i=0; i<m; i++){
        for(j=0; j<l; j++){
            scanf("%d", &B[i][j]);
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<l; j++){
            C[i][j]=0;
            for(k=0; k<m; k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<l; j++){
            if(j<l-1){
            printf("%d ", C[i][j]);
            }else{
                printf("%d", C[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
    
}
