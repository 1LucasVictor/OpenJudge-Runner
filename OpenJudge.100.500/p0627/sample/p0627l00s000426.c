#include <stdio.h>
 
int main(){
	int A, B, max = 0;
 
	scanf("%d %d", &A, &B);
 	max = A+B;
	if (A - B > max) max = A - B;
	if (A * B > max) max = A * B;
 
	printf("%d\n", max);
 
	return 0;
}