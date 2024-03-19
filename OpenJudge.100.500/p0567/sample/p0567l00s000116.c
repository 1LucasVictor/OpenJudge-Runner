#include<stdio.h>
int main(void) {
	int a,b,c;
	int ans = 0;
	scanf("%d %d %d", &a,&b,&c);
	if (a > b) {
		a= a - b;
	}
	c = c - a;
	if (c < 0) {
		c = 0;
	}
	printf("%d\n", c);
	return 0;
}