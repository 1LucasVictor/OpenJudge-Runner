#include<stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	int s;
	if (c - (a - b) < 0) {
		s = 0;
	}
	else {
		s = c - (a - b);
	}
	printf("%d", s);
	return 0;
}