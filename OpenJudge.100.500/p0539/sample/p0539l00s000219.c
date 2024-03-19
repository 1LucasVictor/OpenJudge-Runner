#include <stdio.h>

int main()
{
	int n;
	int i, j;
	scanf("%d", &n);
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (n == (i*j)) {
				printf("Yes");
				return 0;
			}
		}
	}
	printf("No");

}


