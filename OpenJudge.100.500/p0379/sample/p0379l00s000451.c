#include <stdio.h>
int main(void){
    int A[100][100],b[100];
    int i,j,n,m;
    int d,sum=0;
    
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            d=A[i][j]*b[j];
            sum=sum+d;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

