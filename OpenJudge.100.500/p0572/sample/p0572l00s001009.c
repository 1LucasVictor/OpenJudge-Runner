#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define ll long long int
#define lim 100010
#define mod 1e9+7
#define INF 1e9
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define ABS(x) ((x)>0?(x):-(x))
#define num 2019
int main(void){
	ll l,r;
	scanf("%lld%lld",&l,&r);
	l %= num;
	r %= num;
	ll ans=l*r%num;
	if(r<=l){
		ans=0;
	}else{
		for(ll i=l;i<r;i++){
			for(ll j=l+1;j<r;j++){
				ans = MIN(ans,i*j%num);
			}
		}
	}
	printf("%lld",ans);
	return 0;
}