#include<stdio.h>
int main(void) {
	int a;
	int b;
	scanf("%d %d", &a,&b);
	if ((b + a) % 2 == 0) {
		printf("%d", (b + a) / 2);
	}
	else {
		printf("IMPOSSIBLE");
	}
	return 0;
}