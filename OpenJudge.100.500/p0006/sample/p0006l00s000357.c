#include<stdio.h>

int main() {
	int n,i;
	int loan = 100000;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		loan = loan*1.05;
		if (loan % 1000 != 0) {
			loan = (loan / 1000 + 1) * 1000;
		}
	}
	printf("%d\n",loan);
	return 0;
}