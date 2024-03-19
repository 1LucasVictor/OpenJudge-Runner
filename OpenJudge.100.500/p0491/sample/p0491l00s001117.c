#include <stdio.h>
int main(void){
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int ans=n%k;
    if(k-ans<ans)ans=k-ans;
    printf("%lld\n", ans);
    return 0;
}
