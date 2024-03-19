#include<stdio.h>
int main(void)
{
	int a, b, i, j, k;
	for (i = 0; ; i++) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			return 0;
		for (j = 0; j < a; j++) {
			for (k = 0; k < b; k++) {
				if (j == 0 || k == 0 || k == b - 1 || j == a - 1)
					printf("#");
				else
					printf(".");
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return(0);
}
