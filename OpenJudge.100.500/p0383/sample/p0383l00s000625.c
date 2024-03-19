#include<stdio.h>
int main(){
    int A[101][101],B[101][101];
    long int sum;
    int n,m,l,k;
    int i,j;
    scanf("%d %d %d",&n,&m,&l);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            sum=0;
            for(k=0;k<m;k++){
                sum += A[i][k] * B[k][j];
            }
            printf("%ld",sum);
            if(l-j>1){
                printf(" ");
            }
        }
        printf("\n");
    }
}
