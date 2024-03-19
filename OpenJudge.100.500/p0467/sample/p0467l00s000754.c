#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>


//using ll = long long;
int ASC( void *a,  void *b) {
	return strcmp(*(const char **)a, *(const char **)b);//降順
}
int GCD(int a, int b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}
long min(long a, long b ) {
	if (a < b) {
		return a;
	}
	else
		return b;
}

int main(void)
{
	long a, b, c, k, num = 0, ans = 0;
	scanf("%ld%ld%ld%ld",&a,&b,&c,&k);
	ans += min(a, k);
	if (a <= k)
		num = k - a;
	if (b <= num)
		num = num - b;
	else
		num = 0;
	ans -= min(c, num);
	printf("%ld",ans);

	return 0;
}