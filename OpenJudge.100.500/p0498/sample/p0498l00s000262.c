#include<stdio.h>
int main()
{
	int n;

	scanf("%d",&n);

	printf("%d",n%2==0?n/2:n/2+1);
	return 0;
}