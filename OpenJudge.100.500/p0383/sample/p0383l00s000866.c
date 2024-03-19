#include <stdio.h>
int main(void){
    int n,m,l,i,j,k;
    scanf("%d %d %d",&n,&m,&l);
    int a[n][m],b[m][l];
    long ans[n][l];
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            ans[i][j]=0;
        }
    }
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
        for(j=0;j<l;j++){
            for(k=0;k<m;k++){
               ans[i][j]+=a[i][k]*b[k][j]; 
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            if(j!=l-1){
                printf("%ld ",ans[i][j]);
            }
            else{
                printf("%ld\n",ans[i][j]);
            }
        }
    }
    return 0;
}

