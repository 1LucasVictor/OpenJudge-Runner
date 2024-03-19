#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, x,i,j,k,count=0;
	scanf("%d %d", &n, &x);
	if (n == 0 && x == 0) return 0;
	for (i = 1; i < n+1; i++) {
		for (j = 1; j < n+1; j++) {
			for (k = 1; k < n+1; k++) {
				if (i != k && k != j && i != j) {
					if (i + j + k == x)	 count++;
					
				}
			}
		}
	}

	printf("%d", count/6);

	return 0;
}