#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	c = a / 3600;
	b = (a - c*3600) / 60;
	printf("%d:%d:%d\n", c, b, a%60);
	return 0;
}