/*--- AOJ 0008 ---*/

#include<stdio.h>

#define  NUM  100

int main(void)
{
	int a, b, c, d;
	int n;
	int sum = 0;

	while (scanf("%d", &n) != EOF) {
		for (a = 0; a < 10; a++) {
			for (b = 0; b < 10; b++) {
				for (c = 0; c < 10; c++) {
					for (d = 0; d < 10; d++) {
						if (n == a + b + c + d)
							sum++;
					}
				}
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}

	return (0);
}