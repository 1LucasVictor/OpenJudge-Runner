#include <stdio.h>
#define min(p,q)((p)<(q)?(p):(q))

int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	printf("%lld",min(n%k,k-n%k));
}