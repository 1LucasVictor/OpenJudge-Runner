#include <stdio.h>

int main(void){
    int n,m,l,i,j,k;
    long long int sum;
    long long int a[100][100],b[100][100],c[100][100];
    
    scanf("%d %d %d",&n,&m,&l);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%lld",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        
        for(j=0;j<l;j++){
            sum=0;
            for(k=0;k<m;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%lld",c[i][j]);
            if(j!=l-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
