#include<stdio.h>

int main(void)

{
	int d, n;
	int i;
	int count;
	count = 0;
	scanf("%d", &d);
	scanf("%d", &n);
	if (d == 0) {
		for (i = 1; i < 101; i++) {
			count++;
			if (n == count) {
				break;
			}
		}
		printf("%d", n);

	}
	else if (d == 1) {
		for (i = 1; i < 101; i++) {
			count++;
			if (n == count) {
				break;
			}

		}
		printf("%d", n * 100);

	}
	else if (d == 2) {
		for (i = 1; i < 101; i++) {
			count++;
			if (n == count) {
				break;
			}

		}
		printf("%d", n * 10000);

	}
	return 0;
}