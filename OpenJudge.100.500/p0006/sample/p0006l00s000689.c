#define PL 1.05

#include<stdio.h>

int main(void){
	int i, n, debt = 100000;

	scanf("%d", &n);
	if (n > 100) {
		printf("Error!\n\a");
		return 0;
	}

	for (i = 0; i < n;i++) {
		debt = debt * PL;
		if (debt%1000 != 0) {
			debt = debt - (debt%1000) + 1000;
		}
	}

	printf("%d\n", debt);
	return 0;
}