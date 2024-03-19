#include <stdio.h>

int main() {
	long H, N, S=0, i, j, ans;
	scanf("%ld %ld", &H, &N);
	for (i = 0; i < N; i++) {
		j = 0;
		scanf("%ld", &j);
		S += j;
	}

	if (S >= H) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}