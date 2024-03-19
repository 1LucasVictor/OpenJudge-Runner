#include<stdio.h>

int main() {
	int n, x, count = 0, i, j, k;
	while(1) {
		scanf("%d %d", &n, &x);
		if(n == 0) break;
		if(n * 3 - 3 < x) {
			puts("0");
			continue;
		}
		for(i = n; i >= 3; --i) {
			for(j = i - 1; j >= 2; --j) {
				for(k = j - 1; k >= 1; --k) {
					if(i + j + k == x) ++count;
				}
			}
		}
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}
