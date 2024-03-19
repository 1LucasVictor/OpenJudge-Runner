#include <stdio.h>
int main(void){
    int n,m,l;
    scanf("%d%d%d",&n,&m,&l);
    //printf("%d %d %d\n",n,m,l);
    int a[n][m],b[m][l],ans[n][l];
    int i,j,z;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            scanf("%d",&a[i][j]); 
            //printf("%d ",a[i][j]);
        }
        //printf("\n");
    }
    for(i=0;i<=m-1;i++){
        for(j=0;j<=l-1;j++){
            scanf("%d",&b[i][j]); 
            //printf("%d ",b[i][j]);
        }
        //printf("\n");
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=l-1;j++){
            ans[i][j]=0;
        }
    }
    //?????????????????????
    for(z=0;z<n+1;z++){
        for(i=0;i<l;i++){
            for(j=0;j<m;j++){
                ans[z][i]=ans[z][i]+(a[z][j])*(b[j][i]);  
            }
        }
    }
    //
    for(i=0;i<=n-1;i++){
        for(j=0;j<=l-1;j++){
            printf("%d",ans[i][j]);
            if(j<l-1){
                printf(" ");
            }
        }
        printf("\n"); 
    }
    return 0;
}