#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int a,b,c,k;
    scanf("%d%d%d%d",&a,&b,&c,&k);
    int ans=0;
    if(a>=k){
        ans=k;
    }else{
        ans=a;
        if(a+b<k){
            ans-=(k-a-b);
        }
    }
    printf("%d\n",ans);
    return 0;
}