#include<stdio.h>
int main()
{
	long long A;
	float B;
	long long prod;
	scanf("%lld %f",&A,&B);
	B *= 100;
	//printf("%lld\n%f",A,B);
	prod = A * ((long long)B);
	printf("%lld",prod/100);
}