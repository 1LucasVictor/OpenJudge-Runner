#include <stdio.h>
int main(){
    int n,m,l,a,b;
    int vA[101][101]={};
    int vB[101][101]={};
    long long vC[101][101]={};
    
    scanf("%d%d%d",&n,&m,&l);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&a);
            vA[i][j]=a;
        }
    }
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=l;j++){
            scanf("%d",&b);
            vB[i][j]=b;
        }
    }
    
    for(int j=1;j<=n;j++){
        for(int k=1;k<=l;k++){
            for(int i=1;i<=m;i++){
                vC[j][k]+=vA[j][i]*vB[i][k];
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=l;j++){
            if(j!=1) printf(" ");
            printf("%lld",vC[i][j]);
    }
    printf("\n");
    }
    return 0;
}
