#include <stdio.h>
 
int main(void){
	int A, B, T;
	if (scanf("%d%d%d", &A, &B, &T) != 3) return 1;
	printf("%d\n", B * (T / A));
	return 0;
}