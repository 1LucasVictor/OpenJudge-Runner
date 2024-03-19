#include <stdio.h>
#include <limits.h>

int main(void){
    long long int n,k;
    long long int ans;

    scanf("%lld %lld",&n,&k);
    while(1){
        if(k==1){
            printf("0\n");
            return 0; 
        }
        if(n<k)break;
        n=n-k;
    }
    ans=n;
    n=k-ans;
    if(n<ans){
        ans=n;
    }


    printf("%lld",ans);
    return 0;
}