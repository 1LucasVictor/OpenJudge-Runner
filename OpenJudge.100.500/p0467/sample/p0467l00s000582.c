#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    long long int a,b,c,k,ans=0;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    for(int i=0;k>i;++i){
        if(a>0){
            ++ans;
            --a;
        }
        else if(b>0){
            --b;
        }
        else if(c>0){
            --ans;
        }
    }
    printf("%d",ans);
    return 0;
}