#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
int compare(const void *a,const void *b){
    if(*(long long *)a>*(long long *)b)return 1;
    return -1;
}
int main(int argc, const char * argv[]) {
    long long n,d;
    scanf("%lld%lld",&n,&d);
    long long ans=0;
    for(int i=0;i<n;i++){
        long long x,y;
        scanf("%lld%lld",&x,&y);
        if(x*x+y*y<=d*d){
            ans++;
        }
    }
    printf("%lld",ans);
    return 0;
}
