#include <stdio.h>
int main(void){
	int X, A;
	scanf("%d %d", &X, &A);
	if (X < A)printf("0");
	else if (X >= A)printf("10");

	return 0;
}