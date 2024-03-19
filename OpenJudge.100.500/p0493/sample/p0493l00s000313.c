#include<stdio.h>
#include<stdlib.h>

int main()
{
	long long int x;
	scanf("%lld", &x);
	long long int y, z;
	y = x / 500;
	z = (x - y * 500) / 5;
	printf("%lld", y * 1000 + z * 5);
	
}