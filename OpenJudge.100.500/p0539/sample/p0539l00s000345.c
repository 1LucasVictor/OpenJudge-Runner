#include<stdio.h>
#include<string.h>

int N;
int ans = 0;

int main()
{
	scanf("%d", &N);

	if (N <= 81) {
		for (int i = 1; i < 10; i++) {
			if (N % i == 0 && N / i <= 9) {
				ans = 1;
				break;
			}
		}
	}

	if (ans == 1) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}