#include <stdio.h>
#include <math.h>
int main(void){
    long long n,d,x,y,cnt=0;
    scanf("%lld %lld",&n,&d);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&x,&y);
        if(sqrt(x*x+y*y)<=d) cnt++;
    }
    printf("%lld",cnt);
    return 0;
}