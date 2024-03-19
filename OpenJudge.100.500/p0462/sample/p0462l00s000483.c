#include<stdio.h>

int main(void){

	long long int a;
	long long int ans;
	double b;


	scanf("%lld %lf", &a, &b);

	ans = (double) a * b;

	printf("%lld", ans);

	return 0;
}