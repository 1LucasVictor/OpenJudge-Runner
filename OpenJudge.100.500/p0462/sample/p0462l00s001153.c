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
	lld a,ans=0;Lf b;
	scanf("%lld%Lf", &a,&b);
	if (!a || !b)printf("0");
	else {
		lld a100,a10,a1,a01,a02,b100, b10, b1;
		b100 = b;
		b10 = (b - b100) * 10;
		b1 = (int)(b * 100) % 10;
		a100 = a;
		a10 = a / 10;
		a1 = a / 100;
		a02 = (a % 10) * b1;
		a01 = ((a % 100) / 10) * b1 + (a % 10) * b10;
		ans += (a02 + a01 * 10) / 100;

		ans += a100 * b100 + a10 * b10 + a1 * b1;
		//printf("%lld", (lld)a * (lld)b);
		//printf("%lld %lld %lld %lld %lld %lld\n",b100,b10,b1,a100,a10,a1);
		printf("%lld", ans);
	}
}