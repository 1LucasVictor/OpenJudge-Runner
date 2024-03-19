#include <stdio.h>

int main(void)
{
	int H, A, num;

	scanf("%d%d", &H, &A);

	for(num = 0; H > 0; num++) {
		H -= A;
	}

	printf("%d", num);
	return 0;
}