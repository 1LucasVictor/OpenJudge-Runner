#include <stdio.h>

int main(void) {
	int N;
	
	scanf("%d", &N);
	
	if((N % 10) == 7)					printf("Yes\n");
	else if(((N / 10) % 10) == 7)		printf("Yes\n");
	else if(((N / 100) % 10) == 7)	printf("Yes\n");
	else								printf("No\n");
	
	return 0;
}
