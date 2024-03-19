#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n,q,i,j,k,a,**A;
    scanf("%d",&n);
    
    A=(int **)malloc(n*sizeof(int *));
    for(i=0;i<n;i++)
        A[i]=(int *)malloc(n*sizeof(int));
        
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            A[i][j]=0;
    
    
    for(i=0;i<n;i++){
        scanf("%d%d",&k,&q);
        for(j=0;j<q;j++){
            scanf("%d",&a);
            A[k-1][a-1]=1;
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++)
            printf("%d ",A[i][j]);
        printf("%d\n",A[i][j]);
    }
    return 0;
}

