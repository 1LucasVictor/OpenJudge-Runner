#include<stdio.h>

int main(void) {

	int a,bp,ans;
	double b;
	scanf("%d %lf", &a, &b);
	bp = b*100;
	ans = a*bp/100;
	printf("%d", ans);

	return 0;
}