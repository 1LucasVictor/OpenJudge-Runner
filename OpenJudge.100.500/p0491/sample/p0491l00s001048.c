#include <stdio.h>

int main(void){
    int n,k,x;
    int ans;
    int i;
    scanf("%d %d",&n,&k);
    while(1){
        if(k==1){
            printf("0\n");
            return 0; 
        }
        if(n<=k)break;
        n=n-k;
    }
    ans=n;
    n=k-ans;
    if(n<ans){
        ans=n;
    }


    printf("%d\n",ans);
    return 0;
}