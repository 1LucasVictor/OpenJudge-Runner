#include <stdio.h>

int main()
{
	int i;
	int K;
	int A, B;

	scanf("%d", &K);
	scanf("%d%d", &A, &B);

	for (i = 1; i <= 1000; i++) {
		if ((i*K >= A) && (i*K <= B)) {
			printf("OK\n");
			break;
		}
	}
	if (i == 1001) {
		printf("NG\n");
	}

	return 0;
}