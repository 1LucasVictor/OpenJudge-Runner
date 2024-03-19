#include <stdio.h>

int main(void)
{
	long x;
	long glad = 0;
	scanf("%ld", &x);
	if(x/500>0) {
	glad += x / 500 * 1000;
	x = x - glad / 2;
	}
	if(x/5>0) {
	glad += x / 5 * 5;
	
	}
printf("%ld\n", glad);
	return 0;
}