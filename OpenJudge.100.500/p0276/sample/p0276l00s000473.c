#include <stdio.h>

int a[100][100];

int main(void){
    int n,j,i;
    int u,k,t;
    
    
    
    scanf("%d",&n);
    
    for(i=1;j<=n;i++){
        for(j=1;j<=n;j++){
            a[i][j]=0;
        }
    }
    
    for(i=1;i<=n;i++){
        scanf("%d",&u);
        scanf("%d",&k);
       for(j=1;j<=k;j++){
        scanf("%d",&t);
            a[i][t]=1;
        }
        
    }


    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            
            printf("%d",a[i][j]);
            if(j!=n)printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}