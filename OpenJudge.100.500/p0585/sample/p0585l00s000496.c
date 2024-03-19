#include <stdio.h>
int main(void)
{
	int a, b, t,i,j,k;
	scanf("%d %d %d", &a, &b, &t);
	for (i = 0,j = 1,k=0; i < t + 0.5; i++) {
		if (i == j * a) {
			k = k + b;
			j++;
		}
	}
	printf("%d", k);
	return 0;
}