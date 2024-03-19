#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,x,y;;//アクセス用
    int n,m,l;
    int sum=0;
    scanf("%d %d %d",&n,&m,&l);
    
    int a[n][m];
    int b[m][l];
    long c[n][l];
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(x=0;x<l;x++){
            for(y=0;y<m;y++){
                sum=sum+a[i][y]*b[y][x];
            }
            c[i][x]=sum;
//            printf("sum:%d \n\n",c[i][x]);
            sum=0;
            
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%ld",c[i][j]);
            if(j<l-1){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }
    
    return 0;
}
