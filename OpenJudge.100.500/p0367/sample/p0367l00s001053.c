#include<stdio.h>

int main(void) {
	int a=0, b=0, c=0,d=0;

	scanf("%d %d %d", &a, &b,&c);

	for (;;) {
		if (c%a == 0)
			d++;
		a++;
		if (a - b == 0)
			break;
	}
	printf("%d\n", d);
	return 0;
}