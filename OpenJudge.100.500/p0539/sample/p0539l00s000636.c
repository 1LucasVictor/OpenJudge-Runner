# include<stdlib.h>
# include<stdio.h>

int main()
{
	int N = 0;
	int i;
	int result = 0;
	scanf("%d", &N);
	for (i = 1; i < 10; i++) {
		if (N % i == 0) {
			if (N / i < 10) {
				result = 1;
				break;
			}
		}
	}
	if (result) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}