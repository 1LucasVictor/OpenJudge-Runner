#include <stdio.h>

int main(void)
{
	int a, b, c;
	int i, total;

	scanf("%d %d %d", &a, &b, &c);

	total = 0;

	for (i = a; i <= b; i++){
		if (c % i == 0){
			total = total + 1;
		}
	}
	printf("%d\n", total);

	return (0);
}