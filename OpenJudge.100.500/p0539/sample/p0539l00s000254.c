#include<stdio.h>
#include <stdlib.h>



int main() {
	int n;
	int hantei = 0;
	int i, j;
	scanf("%d", &n);
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			if (n == i*j)
				hantei = 1;
		}
	}
	if (hantei == 1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}