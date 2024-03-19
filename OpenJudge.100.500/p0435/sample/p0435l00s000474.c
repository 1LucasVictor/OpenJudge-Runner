#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
int main(){
    long long i,n,d,x,y,ans=0;
    scanf("%lld %lld",&n,&d);
    for(i=0; i<n; i++){
        scanf("%lld %lld",&x,&y);
        if(x*x+y*y<=d*d)ans++;
    }
    printf("%lld",ans);
    return 0;
}