#include<stdio.h>
int main(void){
    int  i,j,n,m,a[100][100]={0},b[100]={0},k = 0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                k = k + a[i][j]*b[j];
            }
            printf("%d\n",k);
            k=0;
    }
    return 0;
}