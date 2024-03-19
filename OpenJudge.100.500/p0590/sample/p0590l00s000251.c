#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[5], k;
	int i, j;
	
	for(i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);
	
	for(i = 0; i < 4; i++) {
		for(j = i + 1; j < 5; j++) {
			if(abs(a[i] - a[j]) > k) {
				printf(":(\n");
				return 0;
			}
		}
	}
	
	printf("Yay!\n");
	return 0;
}