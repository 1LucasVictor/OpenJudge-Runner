
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
				t = N;
				break;
			}
			N = N - 100;

		}
		if (t % 10 == 7) {
			printf("Yes");
			break;
		}
		while (1) {
			if (N <= 9) {
				t = N;
				break;
			}
			N = N - 10;
		}
		if (t== 7) {
			break;
		}
		else {
			printf("No");
			break;
		}
	}
	return 0;
}