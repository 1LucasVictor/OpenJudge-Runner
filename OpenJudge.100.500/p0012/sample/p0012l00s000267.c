#include<stdio.h>

int main(void)
{
	int train[100];
	int i,j=0,n = 0;

	while (scanf("%d", &train[n]) != EOF && n <= 100) {
		if (train[n] >= 0 && train[n] <= 10) {
			n++;
		}
	}


	for (i = 0; i < n; i++) {
		j = 0;
		if (train[i] == 0) {
			while (j <= i) {
				if (train[i - j] != -1 && train[i - j] != 0) {
					printf("%d\n", train[i - j]);
					train[i] = -1;
					train[i - j] = -1;
					break;
				}
				else {
					j++;
	     	        	}
			}
		}
	}

	return 0;
}