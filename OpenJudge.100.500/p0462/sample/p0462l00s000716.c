#include <stdio.h>


int main(void) {
	long unsigned int a;
	unsigned int b;

	scanf("%lu", &a);

	char temp[5];
	scanf("%s", temp);
	b = (temp[0] - '0') * 100 + (temp[2] - '0') * 10 + (temp[3] - '0');

	printf("%lu\n", a * b / 100);

	return 0;
}
