#include<stdio.h>

int Way[100] = { 0 };

int main() {
	int N;
	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			for (int c = 0; c < 10; c++) {
				for (int d = 0; d < 10; d++) {
					Way[a + b + c + d]++;
				}
			}
		}
	}
	while (1) {
		if (scanf("%d", &N) == EOF)break;
		else {
			printf("%d\n", Way[N]);
		}
	}

	return 0;
}

