#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void*a,const void *b) {
	return *(int*)a - *(int*)b;
}

int main() {
	long long int l=0,r=0,d,k,a,b,c = 0, n, x[200000],y[200000],e[100] = { 0 }, ans = 0;
	char s[3], cas[4][4] = {"AC","WA","TLE","RE"};
	scanf("%lld%lld", &n,&d);
	for (int i = 0; i < n; i++)scanf("%lld%lld", &x[i], &y[i]);
	for (int i = 0; i < n; i++) {
		long long int od = x[i] * x[i] + y[i] * y[i];
		if (od <= d * d)ans++;
	}
	printf("%lld",ans);
	return 0;
}