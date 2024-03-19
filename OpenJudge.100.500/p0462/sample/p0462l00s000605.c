#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	long A;
	double  B;

	scanf("%ld %lf", &A, &B);
  
    B *= 100;

	printf("%ld", (long)(A*B/100));
}