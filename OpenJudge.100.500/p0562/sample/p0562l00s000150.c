#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", b / a + (b % a ? 1 : 0));
	return 0;
}
