#include <stdio.h>

int main() {
	int n, debt;
	scanf("%d", &n);
	debt = 100000;
	for (; n>0; n--) {
		int interest;
		interest = debt / 20;
		interest = (interest+999) / 1000 * 1000;
		debt += interest;
	}
	printf("%d\n", debt);
	return 0;
}