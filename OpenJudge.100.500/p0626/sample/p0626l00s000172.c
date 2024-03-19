#include <stdio.h>

int main(void) {
	int i = 0;
	int ans = 1, N;
	int D;
	if(scanf("%d %d", &D, &N) == 2)

	for(i = 0; i < D; i++){
		ans *= 100;
	}
	printf("%d\n", ans * N);

	return 0;
}