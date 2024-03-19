#include <stdio.h>

int main() {
	int a, b, c;
	int answer = 0;

	scanf("%d %d %d", &a, &b, &c);

	for (; a <= b ; a++) {
		if (c % a == 0) {
			answer++;
		}
	}

	printf("%d\n", answer);


	return 0;
}
