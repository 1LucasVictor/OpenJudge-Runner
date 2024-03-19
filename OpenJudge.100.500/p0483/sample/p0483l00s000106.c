#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int j = 100;
	for (int i = 0; i < 3; i++) {
		int t = N / j;
		if (t == 7) {
			printf("Yes");
			return 0;
		}
		N = N - j * t;
		j = j / 10;
		//printf("%d %d %d\n",N, t, j);
	}
	printf("No");
	return 0;
}