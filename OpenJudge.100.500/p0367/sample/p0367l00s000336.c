#include <stdio.h>

int main(void) {
	int a,b,c;
	int count = 0;

	scanf("%d%d%d",&a,&b,&c);
	if (b > c/2) {
		b = c/2;
	}
	while (a < b) {
		if (c%a++ == 0) {
			++count;
		}
	}
	printf("%d\n",count);
	return 0;
}