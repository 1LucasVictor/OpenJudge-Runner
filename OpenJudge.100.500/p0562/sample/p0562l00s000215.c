#include <stdio.h>

int main()
{
	int A;
	scanf("%d", &A);

	int B;
	scanf("%d", &B);

	int count = 0;

	while (1) {
		if ( B >= 1 && count == 0) {
			B = B-A;
			count++;
		} else if ( B >= 1 && count > 0) {
			B = B-A+1;
			count++;
		} else {
			break;
		}
	}

	printf("%d\n", count);

	return 0;
}
