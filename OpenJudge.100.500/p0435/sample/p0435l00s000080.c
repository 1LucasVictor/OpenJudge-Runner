#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main(){
    ll n, d, x[200000], y[200000];
    scanf("%lld%lld", &n, &d);
    for(int i=0;i<n;i++) scanf("%lld%lld", x+i, y+i);

    int ans = 0;
    for(int i=0;i<n;i++){
        if(x[i]*x[i]+y[i]*y[i] <= d*d)
            ans += 1;
    }
    printf("%d\n", ans);
    return 0;
}