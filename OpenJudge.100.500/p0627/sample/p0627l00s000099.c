#include <stdlib.h>
#include <stdio.h>

int main(){

	long int A, B, sum;

	scanf("%ld %ld", &A, &B);

	sum = A + B;
	if (A - B > sum)
		sum = A - B;
	if (A * B > sum)
		sum = A * B;

	printf("%ld\n",sum );

	return 0;
}