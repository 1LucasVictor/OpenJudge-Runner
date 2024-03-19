/// ****** Property of vipulks ****** \

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ll long long
ll pos(ll n){
	if(n>0)
		return n;
	return 0;
}
int main(){
	ll n,i,j,k,q,a,b,c,ans;
	//scanf("%lld",&t);
	q=1;
	bool ok=true;
	while(q--){
		scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
		if(k<=a)
			ans=k;
		else if(k<=a+b)
			ans=a;
		else if(k<=a+b+c)
			ans=a-(k-a-b);
		printf("%lld\n",ans);
	}
	return 0;
}