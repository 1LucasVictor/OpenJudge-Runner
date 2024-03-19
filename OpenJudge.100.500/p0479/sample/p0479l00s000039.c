#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	int N;
	scanf("%d", &N);
	int a[2010] = { 0 };
	int b[2010] = { 0 };
	int i;
	int j;
	for (i = 2; i < N + 1; i++) {
		scanf("%d", &a[i]);
		j = 1;
		for (j; j < i; j++) {
			if (j == a[i]) {
				b[j] = b[j] + 1;
			}
		}
	}
	for (i = 1; i < N + 1; i++) {
		printf("%d\n", b[i]);

	}
	return 0;
}

