#include <stdio.h>

int main () {
	
	int a=0, b=0;
	scanf("%d %d", &a, &b);

	if (b%a == 0)printf("%d\n", (a+b));
	else printf("%d\n", (b-a));

	return 0;
}