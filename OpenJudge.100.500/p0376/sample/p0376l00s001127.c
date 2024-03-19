#include<stdio.h>
int main(void)
{
	int i, n, j, d[101], t;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &d[i]);
	}

	for (i = n; i >= 1; i--) {
		if (i == 1) {
			printf("%d", d[i]);
		}
		else {
			printf("%d ", d[i]);
		}
	}

	printf("\n");
	
	return(0);
}
