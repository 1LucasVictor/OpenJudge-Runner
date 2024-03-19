#include<stdio.h>

int table[101];

int main()
{
	int d,n,i;
	scanf("%d %d", &d, &n);

	for (i = 1; i <= 100; i ++) {
		if (d == 0) {
			table[i] = i;
		} else if (d == 1) {
			if (i == 100) {
				table[i] = 101 * 100;
			} else {
				table[i] = i * 100;
			}
		} else {
			if (i == 100) {
				table[i] = 101 * 10000;
			} else {
				table[i] = i * 10000;
			}
		}
	}
	printf("%d",table[n]);
	return 0;
}
