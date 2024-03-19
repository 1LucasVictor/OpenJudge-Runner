#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n,m,l;
    int i,j,k;
    int a[100][100]={0};
    int b[100][100]={0};
    int c[100][100]={0};
    
    scanf(" %d %d %d",&n,&m,&l);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++){
        for(k=0;k<l;k++){
            scanf("%d",&b[j][k]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            for(k=0;k<m;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%d",c[i][j]);
            if(j!=l-1){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }
    return 0;
}