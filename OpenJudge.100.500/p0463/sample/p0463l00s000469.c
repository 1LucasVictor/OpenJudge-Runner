#include <stdio.h>

int main(void) {
	int n = 0;
	int m = 0;

	scanf("%d", &n);

	m = n % 10;

	if(m == 2 || m == 4 || m == 5 || m == 7 || m == 9) {
		puts("hon");
	} else if(m == 0 || m == 1 || m == 6 || m == 8) {
		puts("pon");
	} else {
		puts("bon");
	}

	return 0;
}