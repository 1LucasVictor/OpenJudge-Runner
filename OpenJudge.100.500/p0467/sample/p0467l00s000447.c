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

int main(void)
{
	long a, b, c, k, num = 0, ans = 0;
	scanf("%ld%ld%ld%ld",&a,&b,&c,&k);
	if (a <= k) {
		ans += a;//2
		num = k-a;//3-2=1
	}
	else {
		ans += k;
		printf("%ld",ans+1);
		return 0;
	}
	if (b <= num) {
		ans += 0;
		num = k - b;//1-1=0
	}
	else {
		ans += 0;
		printf("%ld", ans+1);
		return 0;
	}
	if (c <= num) {
		ans += -1;
		num += c;
	}
	else {
		ans += -1;
		printf("%ld", ans);
		return 0;
	}
	printf("%ld",ans+1);

	return 0;
}