#include <stdio.h>
int main(void) {
	int i, j, n, count;

	while (scanf("%d", &n) != EOF){
		count = 0;
		for (i = n; i > 1; i--){
			for (j = i - 1; j >= 2; j--){
				if (i % j == 0) break;
				else if (j == 2) count++;
			}
		}
		count++; //?´???°2???????????????
		printf("%d\n", count);
	}
	return 0;
}