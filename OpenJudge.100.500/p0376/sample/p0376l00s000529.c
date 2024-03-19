#include <stdio.h>

int main(void)
{
	int n;
	int a;
	int b[1000];
	int c;
	
	scanf("%d", &n);
	
	for (a = 0; a < n; a++){
		scanf("%d", &b[a]);
	}
	for (c = n - 1; c >= 1; c--){
		printf("%d ", b[c]);
	}
	printf("%d", b[0]);
	printf("\n");
	
	return (0);
}