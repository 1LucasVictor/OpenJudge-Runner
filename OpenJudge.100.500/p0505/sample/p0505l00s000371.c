#include<stdio.h>
#define ll long long
int main(){
    ll h, n, i = 0, sum = 0;
    scanf("%lld%lld",&h,&n);
    ll a[n];
    for(; i < n; i++){
        scanf("%lld",&a[i]);
        sum += a[i];
    }
    if(sum >= h)
        puts("Yes");
    else
        puts("No");
    return 0;
}