#include<stdio.h>

int main(void) {

	int n;
	int i=1;
	int x;
	
	scanf("%d", &n);

	do
	{
		int x = i;
			if (x % 3 == 0) {
				printf(" %d", i);
				continue;
		}
			
			do{
				if (x % 10 == 3) {
					printf(" %d", i);
					break;
				}
				else {
					x /= 10;
				}
			
			} while (x);
			
	} while (++i <= n);

	printf("\n");

	return(0);
}
