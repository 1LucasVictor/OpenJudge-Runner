#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
#define MOD 1000000007
typedef long long ll;

int main(){
	ll h, n, sum = 0, i = 0;
	scanf("%lld%lld", &h, &n);
	ll a[n];
	rep(i, n){
		scanf("%lld", &a[i]);
		sum += a[i];
		if(sum >= h){
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	return 0;
}
