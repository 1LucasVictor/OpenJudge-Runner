#include<stdio.h>
int main(void) {
	int a, b, t;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &t);

	int ans = 0;

	int syou = 0;

	syou = t / a;

	ans = b * syou;

	printf("%d\n", ans);
	

	return 0;
}