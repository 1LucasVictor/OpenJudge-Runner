#include <stdio.h>

int main(void) {
	int i, num;
	int a[50];

	scanf("%d", &num);
	a[0] = 1;
	a[1] = 1;

	for (i = 2; i <= num; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}

	printf("%d\n", a[num]);	 

	return 0;
}
