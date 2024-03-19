#include<stdio.h>

int main(void) {
	int i,j,n;
	double debt = 100000;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		j = debt*1.05;
		double d = debt*1.05 / 1000;
		j = j / 1000;
		if ((d - (double)j) == 0.00) {
			debt = j * 1000;
		}
		else  {
			j = j+1;
			debt = j * 1000;

		}

	}

	printf("%d\n", (int)debt);
	return 0;
}