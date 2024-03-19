#include <stdio.h>

int main(void) {
    int i,j,k,n,l,ans=0;
    scanf("%d %d", &i,&j);
    int f1[1000][1000]={};
    for(k=0;k<i+1;k++){
        for(l=0;l<j;l++){
            scanf("%d",&n);
            f1[k][l]=n;
        }
    }
    for(k=0;k<i;k++){
            ans = 0;
        for(l=0;l<j;l++){
            ans+=f1[k][l]*f1[i][l];
        }
        printf("%d\n",ans);
    }
    
    return 0;
}