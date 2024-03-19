#include <stdio.h>

int main(void) {
	int n, i;
	int array[100];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < n; i++) {
		if(i) {
			printf(" ");
		}
		
		printf("%d", array[n - i - 1]);
	}
	
	printf("\n");
	
	return 0;
}