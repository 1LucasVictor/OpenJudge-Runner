#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int ans,a,b,c,k;  
    (void)scanf("%d %d %d %d",&a,&b,&c,&k);
    if(a>=k){
        printf("%d\n",k);
        return 0;
    }
    ans=a;
    k-=a;
    k-=b;
    if(k<=0){
        printf("%d\n",ans);
        return 0;
    }
    printf("%d\n",ans-k);

    return 0;
}