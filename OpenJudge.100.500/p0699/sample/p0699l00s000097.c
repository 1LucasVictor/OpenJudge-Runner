#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))

ll a[99];
int main(){
	rep(i,0,3){
		ll n;
		scanf("%lld",&n);
		a[n]++;
	}
	puts(a[5]==2&&a[7]==1?"YES":"NO");
	return 0;
}