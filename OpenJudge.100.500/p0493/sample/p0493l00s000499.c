#include<stdio.h>
int main(void) {
	int n,i,j;
	scanf("%d", &n);
	for (i = 0; i < (n / 500); i++) {
		n / 500;
		i++;
	}
	n %= 500;

	for (j = 0; j < (n / 5); j++) {
		n / 5;
		j++;
	}
	n = i * 1000 + j * 5;
	printf("%d",n);
	return 0;
}