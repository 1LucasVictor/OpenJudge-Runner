#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef long long ll;

int main(){
    ll n,a,ans[200001]={};
    scanf("%lld",&n);
    for(int i=1;i<n;i++) {scanf("%lld",&a);ans[a]++;};
    for(int i=1;i<=n;i++) printf("%lld\n",ans[i]);
    
    return 0;
}