#include <stdio.h>
#define N 9

int main(void){
	int a, b, c, d, n, counter;

	counter = 0;
	while (scanf("%d", &n) != EOF) {
		for (a = 1; a <= N; a++){
			for (b = 1; b <= N; b++){
				for (c = 1; c <= N; c++){
					for (d = 1; d <= N; d++){
						if ((a + b + c + d) == n){
							counter++;
						}
					}
				}
			}
		}
		printf("%d\n", counter);
	}

	return 0;
}