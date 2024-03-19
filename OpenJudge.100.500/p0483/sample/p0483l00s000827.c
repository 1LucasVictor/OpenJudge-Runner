#include<stdio.h>

int main(void)
{
	int N, i=0;

	scanf("%d", &N);
	if ((N % 1000 - N % 100) / 100 == 7) {
		i = 1;
	}
	else if ((N % 100 - N % 10) / 10 == 7) {
		i = 1;
	}
	else if (N % 10 == 7) {
		i = 1;
	}
	if (i == 0) {
		printf("No");
	}
	else {
		printf("Yes");
	}
	return 0;
}
