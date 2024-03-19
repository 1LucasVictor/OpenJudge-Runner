#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long int a[101][101]={},b[101][101]={},c[101][101]={};
    long long int n,m,l,i,j,k = 0;
    scanf("%lld %lld %lld",&n,&m,&l);
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
            for(k=0;k<m;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%lld",c[i][j]);
            if(j!=l-1){
                printf(" ");
            }
        }
        
        if(j!=l-1){
            printf("\n");
        }
    }
    //printf("\n");
    return 0;
}