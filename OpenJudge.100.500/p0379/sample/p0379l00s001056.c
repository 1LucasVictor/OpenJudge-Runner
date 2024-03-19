#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d\n",&n,&m);
    int **A = malloc(sizeof(int*)*n);
    int p;
    for(p=0;p<n;p++){
        A[p] = malloc(sizeof(int)*m);
    }
    int *B = malloc(sizeof(int)*m);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(j!=m-1){
                scanf("%d ",&A[i][j]);
            }else{
                scanf("%d\n",&A[i][j]);
            }
        }
    }
    int k;
    for(k=0;k<m;k++){
        if(k!=m-1){
            scanf("%d\n",&B[k]);
        }else{
            scanf("%d",&B[k]);
        }
    }
    
    int a,b;
    for(a=0;a<n;a++){
        int sum=0;
        for(b=0;b<m;b++){
            sum+=A[a][b]*B[b];
        }
        printf("%d\n",sum);
    }
    return 0;
}

