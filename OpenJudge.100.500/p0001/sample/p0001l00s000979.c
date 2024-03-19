#include <stdio.h>

int pow(int,int);

int main(void)
{
	int a[200], b[200];
	int n = 0;
	int i,j = 1;

	while((scanf("%d %d", &a[n], &b[n]) != EOF) && (n < 200)) {
		if (((a[n] >= 0) && (a[n] <= 1000000)) && ((b[n] >= 0) && (b[n] <= 1000000))) {
			n++;
		}
	}

	for (i = 0; i < n; i++) {
		while (j <= 7) {
			if (((a[i] + b[i]) / 10) < pow(10,j)) {
				printf("%d\n", j + 1);
				break;
			}
			else {
				j++;
		    }
		}
	}

	return 0;
}

int pow(int base, int exponent) {
	int answer = 1;
	while (exponent != 0){
		answer = answer * base;
		exponent--;
	}
	return answer;
}