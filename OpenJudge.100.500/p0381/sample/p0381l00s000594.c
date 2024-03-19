#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int c,i, j, k,l, n, x,count,counta[100];
	l = 0;
	while (1) {
		scanf("%d %d", &n, &x);
		if (n==0||x==0){
			break;
		}
		count = 0;
		for ( i = 1; i <= (n-1); i++){
			for (j = i+1; j <=(n-2); j++){
				for (k = j+1; k <=n; k++){
					if (i + j + k == x) {
						count++;
					}
				}
			}

		}
		counta[l] = count;
		l++;
	}
	c = l;
	for ( i = 0; i < c; i++){
		printf("%d\n", counta[i]);
	}
}