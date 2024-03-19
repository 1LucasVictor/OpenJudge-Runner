#include <stdio.h>

int main() {
	int a, b;
	int i, temp;
	int count = 1;

	for(i = 0; i <= 200; i++) {
		if(scanf("%d %d", &a, &b) == EOF) break;
		temp = a + b;
		count = 1;
		while(1) {
			if((temp - 10) < 0) {
				printf("%d\n", count);
				break;
			} else {
				temp /= 10;
				count++;
			}
		}
	}
	return 0;
}