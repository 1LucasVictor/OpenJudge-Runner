#include <stdio.h>

int main() {
	int n, i, j, k;
	int count;
	int l[100000];
	
	while (scanf("%d", &n) != EOF) {
		count = 0;
		l[count++] = 2;
		l[count++] = 3;
		for (i = 5; i <= n; i+=2) {
			k = 0;
			for (j = 0; l[j]*l[j] <= i; j++) {
				if (i % l[j] == 0) {
					k = 1;
					break;
				}
			}
			if (k == 0) l[count++] = i;
		}
		printf("%d\n", count);
	}
    return 0;
}