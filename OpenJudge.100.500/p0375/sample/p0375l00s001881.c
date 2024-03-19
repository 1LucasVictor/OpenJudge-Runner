#include<stdio.h>
int isinThree(int n) {
	while(n > 0) {
		if (n % 10 == 3) {
			return 1;
		}
		n /= 10;
	}
	return 0;
}
int main () {
	int n;
	int i;
	scanf("%d" , &n);
	for(i = 3; i <= n; i++) {
		if (i % 3 == 0 || isinThree(i)) {
			printf(" %d" , i);
		}
	}
	printf("\n");
	return 0;
}