#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int x;
	
	scanf("%d", &n);
	
	for (i = 3; i <= n; i++){
		if (i % 3 == 0){
			printf(" %d", i);
		}
		else {
			x = i;
			while (x != 0){
				if (x % 10 == 3){
					printf(" %d", i);
					break;
				}
				x /= 10;
			}
		}
	}
	
	printf("\n");
	
	return (0);
}