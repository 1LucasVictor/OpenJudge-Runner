#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define Rep(i,l,r)for(int i=(int)l;i<(int)r;i++)
#define rep(i,n)Rep(i,0,n)
typedef long long lld;
typedef long double Lf;
#define Ma(x,y) ((x)>(y)?(x):(y))
#define mi(x,y) ((x)<(y)?(x):(y))
#define N 100001

int main() {
	lld a,B;
	Lf b;
	scanf("%lld%Lf", &a,&b);
	B = (lld)100 * b;
	a *= B;
	a /= 100;
	printf("%lld", a);
}