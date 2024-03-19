#include<stdio.h>
int main()
{
	int A,B,T,n,i;
	scanf("%d %d %d", &A, &B, &T);
	i=1;
	while((i*A)<=(T+0.5))
	{
	i++;
	}
	i=i-1;
	n=i*B;
	printf("%d",n);
return 0;
}