#include<stdio.h>

int main(void)
{
	unsigned long int a, b, c;
	int i;

	scanf("%ld%ld%ld", &a, &b, &c);

	if ((0 == b % a) || (0 == c % a) || (c / a != b / a)) {
		printf("OK");
	}

	else {
	printf("NG");
}
	return 0;
}