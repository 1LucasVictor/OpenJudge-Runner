#include<stdio.h>

int main() {
	int n;
	int a, b, c, d;
	int count=0;
	while (scanf("%d", &n) != EOF) {
		count = 0;
		for (a = 0;a < 10;a++) {
			for (b = 0;b < 10;b++) {
				for (c = 0;c < 10;c++) {
					d = n - a - b - c;
					if (0 <= d&&d < 10)
						count++;
				}
			}
		}
		printf("%d\n", count);
	}
}