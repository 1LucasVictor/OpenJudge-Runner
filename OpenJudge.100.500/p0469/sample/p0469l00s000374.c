#include<stdio.h>

int main() {
	int a,b;
	int k;
	int i, j=0;

	scanf("%d%d%d", &k, &a, &b);
	for ( i = a; i <= b; i++) {
		if (i % k == 0) {
			j = 1;
			break;
		}
			
	}
	if (j == 1)
		printf("OK\n");
	else
		printf("NG\n");

}
