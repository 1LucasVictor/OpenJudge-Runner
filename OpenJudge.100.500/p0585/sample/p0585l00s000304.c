#include<stdio.h>

int main()
{
	int a, b, t,res;
	scanf("%d %d %d", &a, &b, &t);
	res = (t / a) * b;
	printf("%d", res);
	return 0;
}