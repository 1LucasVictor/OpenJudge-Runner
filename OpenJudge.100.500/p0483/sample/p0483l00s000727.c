#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	while (1) {
		int N;
		scanf("%d", &N);
		int t = N;

		if (t % 100 == 7) {
			printf("Yes");
			break;
		}
		while (1) {
			if (N <= 99) {
				break;
			}
			N = N - 100;

		}
		if (N % 10 == 7) {
			printf("Yes");
			break;
		}
		while (1) {
			if (N <= 9) {
				break;
			}
			N = N - 10;
		}
		if (N == 7) {
			break;
		}
		else if (N != -10000) {
			printf("No");
			break;
		}
	}
	return 0;
}