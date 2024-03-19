#include <stdio.h>
int main(void){
    int n,m,l;
    int i,j,k;
    int sum=0;
    
    scanf("%d %d %d",&n,&m,&l);
    int A[n][m];
    int B[m][l];
    
    for(i=0;i<n;i++)
        for(j=0;j<m;j++) scanf("%d",&A[i][j]);
        
    for(j=0;j<m;j++)
        for(k=0;k<l;k++) scanf("%d",&B[j][k]);
        
    for(i=0;i<n;i++){
        for(k=0;k<l;k++){
            for(j=0;j<m;j++){
                sum=sum+A[i][j]*B[j][k];
            }
            printf("%d",sum);
            sum=0;
            if(k==l-1) break;
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

