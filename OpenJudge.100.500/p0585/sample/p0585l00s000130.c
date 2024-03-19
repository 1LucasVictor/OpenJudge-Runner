#include<stdio.h>
int main()
{
	int A, B, T, k, x;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &T);
	k = 1;
	x = 0;
	while (k*A < T + 0.5) {
		x = x + B;
		k++;
	}
	printf("%d\n", x);


	return 0;
}