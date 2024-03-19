#include <stdio.h>

int main(void){
        long long int x;
        long long int ans=0;
        scanf("%lld",&x);
        while(x-500>=0){
                x-=500;
                ans+=1000;
        }
        while(x-5>=0){
                x-=5;
                ans+=5;
        }
        printf("%lld\n",ans);
        return 0;
}