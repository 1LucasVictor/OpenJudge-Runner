#include<stdio.h>

int main(){

	int n, i=1, x;

	scanf("%d", &n);

	do {
		x = i;
		if (x % 3 == 0) printf(" %d", i);
		else {
			do {
				if (x % 10 == 3) {
					printf(" %d", i);
					break;
				}
				else x /= 10;
			} while (x);
		}
	} while (++i <= n);

	printf("\n");

return 0;

}
