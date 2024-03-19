#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
#include <stdbool.h>

int ASC( void *a,  void *b) {
	return strcmp(*(const char **)a, *(const char **)b);//降順
}
int GCD(int a, int b) {	//最大公約数
	if (b == 0) return a;
	else return GCD(b, a % b);
}
int min(int a, int b ) {
	if (a < b) {
		return a;
	}
	else
		return b;
}
int max(int a, int b) {
	if (a < b)
		return b;
	else
		return a;
}
int main(void)
{
	long long n, d, x,y;
	scanf("%lld%lld",&n,&d);
	long long dis = d*d;
	long long ans, a = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lld%lld",&x,&y);
		ans = (x*x) + (y*y);
		if (ans <= dis) {
			a++;
			
		}
	}
	printf("%lld",a);
	
	return 0;
}//pd pdp
