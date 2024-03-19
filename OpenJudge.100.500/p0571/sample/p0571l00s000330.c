#include <stdio.h>



int main()
{
	int N, A, B;
	int i;
	int total = 0;

	scanf("%d %d %d", &N ,&A,&B);


	for (i = 0; i < N; i++) {
		total = A + total;
	}


	if (total > B) {
		printf("%d\n", B);
	}
	else {
		printf("%d\n", total);
	}

	return 0;
}
