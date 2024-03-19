
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	int N;
	scanf("%d", &N);
	int t = N;

	if (t % 100 == 7) {
		printf("Yes");
		N = -10000;
	}
	while (1) {
		if (N <= 99) {
			break;
		}
		N = N - 100;

	}
	if (t % 10 == 7) {
		printf("Yes");
		N = -10000;
	}
	while (1) {
		if (N <= 9) {
			break;
		}
		N = N - 10;
	}
	if (t == 7) {
		printf("Yes");
	}
	else if (N != -10000) {
		printf("No");
	}
	return 0;
}