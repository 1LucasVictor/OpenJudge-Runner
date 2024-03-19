#include<stdio.h>
int main(void)
{
	int n, k,a,b;
	scanf("%d",&n);
    scanf("%d",&k);
	a = n % k;
	b = k - a;
	if (a < b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	return 0;
}