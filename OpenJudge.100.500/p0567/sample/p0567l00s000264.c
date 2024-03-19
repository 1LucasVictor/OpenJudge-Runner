#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d" , &a, &b, &c);

	if(a > 20 || a < 1 || b > a || b < 1) exit(0);
	if(c > 20 || c < 1) exit(0);

	if(c-(a-b) < 0) {
		printf("%d\n", 0);
	} else {
		printf("%d\n", c-(a-b));		
	}

	return 0;
}