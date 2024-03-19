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
#define N 1001
#define MOD 1000000007
int acs(const void* a, const void* b) { return *(int*)a - *(int*)b; }//1,2,3,4
int des(const void* a, const void* b) { return *(int*)b - *(int*)a; }//9,8,7,6
int cmp_char(const void* a, const void* b) { return *(char*)a - *(char*)b; }//a,b,c,d
int cmp_str(const void* a, const void* b) { return strcmp(*(const char**)a, *(const char**)b); }//aaa,aab
//temmie_のsnippet

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	rep(t,101)rep(k,101)if(x==t+k&&y==2*t+k*4){printf("Yes");return 0;}
	printf("No");
}