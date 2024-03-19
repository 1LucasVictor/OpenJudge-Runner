#include<stdio.h>

int main(void){
    int n,m,l;
    int i,j,k;

    scanf("%d %d %d",&n,&m,&l);
    long long A[n][m],B[m][l],sum;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%lld",&A[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%lld",&B[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            sum=0;
            for(k=0;k<m;k++){
                sum+=A[i][k]*B[k][j];
            }
            if(j==0) printf("%lld",sum);
            else printf(" %lld",sum);
        }
        printf("\n");
    }

    return 0;
}
