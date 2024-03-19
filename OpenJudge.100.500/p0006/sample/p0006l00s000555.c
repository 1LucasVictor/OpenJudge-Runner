#include <stdio.h>

int main(void)
{
	int a;
	int i;
	int n;

	a = 100000;

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		a *= 1.05;
		if (0 != a % 1000){
			a /= 1000;
			a += 1;
			a *= 1000;
		}
	}

	printf("%d\n", a);


	return (0);
}