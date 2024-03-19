#include<stdio.h>
#define ll long long
ll max(ll a, ll b){return a > b ? a : b;}
int main(){
    int n, m;
    ll k;
    scanf("%d%d%lld",&n,&m,&k);
    ll a[n + 1], b[m + 1];
    ll ans = 0, best = 0;
    b[0] = a[0] = 0;
    for(int i = 1; i <= n; i++){
        scanf("%lld",&a[i]);
        a[i] += a[i - 1];
    }
    for(int i = 1; i <= m; i++){
        scanf("%lld",&b[i]);
        b[i] += b[i - 1];
        if(b[i] <= k)
            best = i;
    }
    for(int i = 0; a[i] <= k; i++){
        while(a[i] + b[best] > k)
            best --;
        ans = max(ans, i + best);
    }
    printf("%lld\n",ans);
    return 0;
}