#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int x;
    scanf("%d",&x);
    long long ans=x/500*1000;
    ans+=(x%500)/5*5;
    printf("%lld",ans);
    return 0;
}
