#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 1000000000000000000
int main() {
	double b;
	long long int a;
	long double c;
	int ans;

	scanf("%lld %lf", &a,&b);
	c = a * b;
	c *= 100;
	ans = c / 100;
	
	printf("%d\n",ans);

	return 0;
}
