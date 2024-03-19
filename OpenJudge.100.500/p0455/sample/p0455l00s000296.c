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

#define N 101

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", a+a*a+a*a*a);

	return 0;
}