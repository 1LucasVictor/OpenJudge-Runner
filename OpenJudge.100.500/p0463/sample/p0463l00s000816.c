#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);

	if (N % 10 == 3) {
		printf("bon\n");
	}
	else if ((N % 10 == 0) || (N % 10 == 1) || (N % 10 == 6) || (N % 10 == 8)) {
		printf("pon\n");
	}
	else {
		printf("hon\n");
	}

}