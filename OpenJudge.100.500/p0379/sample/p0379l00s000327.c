#include<stdio.h>
#include<string.h>
int main(void){
int su[100][1000]={0},n,m,l,k,a,go[1000]={0},i,p;
    scanf("%d %d",&n,&m);
    for(k=0;k<n;k++){
        for(l=0;l<m;l++){
            scanf("%d",&a);
            su[k][l]=a;
        }
        for(i=0;i<m;i++){
        go[k]+=su[k][i];
        }
    }
    k=0;
    for(k=0;k<n+1;k++){
        scanf("%d",&a);
        go[k]+=a;
    }
    for(k=0;k<n;k++){
        printf("%d\n",go[k]);

    }


return 0;
}