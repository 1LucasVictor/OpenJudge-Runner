#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
typedef long long LL;
typedef long double Lf;
#define Rep(i,a,n)for(int i=(int)(a);i<(int)(n);i++)
#define rep(i,n)Rep(i,0,n)
#define Ma(x,y) ((x)>(y)?(x):(y))
#define mi(x,y) ((x)<(y)?(x):(y))
#define MOD 1000000007
int acs(const void* a, const void* b) { return *(int*)a - *(int*)b; } // 1,2,3,4
int des(const void* a, const void* b) { return *(int*)b - *(int*)a; } // 8,7,6,5
int cmp_char(const void* a, const void* b) { return *(char*)a - *(char*)b; } // a,b,c,d
int cmp_str(const void* a, const void* b) { return strcmp(*(const char**)a, *(const char**)b); } // aaa,aab
//temmie_のsnippet

#define N 200009

int main() {
	LL n, m, k, a, b, sa[N] = { 0 }, sb[N]={0};
	scanf("%lld%lld%lld", &n, &m, &k);
	rep(i, n) {
		scanf("%lld", &a);
		sa[i+1]=a+sa[i];
	}
	rep(i, m) {
		scanf("%lld", &b);
		sb[i + 1] = b + sb[i];
	}
	int ans = 0;
	rep(i, n+1) {//aの冊数固定
		if (sa[i] > k)break;
		LL p = k - sa[i];
		int q=0,r=m/2,s=m;
		while (s - q > 1) {
			r = (q + s) / 2;
			if (sb[r] <= p)q = r;
			else s = r;
		}
		if (sb[q] <= p)ans = Ma(ans, q+i);
		if (sb[r] <= p)ans = Ma(ans, r+i);
		if (sb[s] <= p)ans = Ma(ans, s+i);
	}

	printf("%d", ans);
}