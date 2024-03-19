#include <stdio.h>
int main(void){
    int i,j;
    int n,m;
    int x,sum=0;
    
    scanf("%d %d",&n,&m);
    int A[n][m];
    int b[m];
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(j=0;j<m;j++) scanf("%d",&b[j]);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            x=A[i][j]*b[j];
            sum=sum+x;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

