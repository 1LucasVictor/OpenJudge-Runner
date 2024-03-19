#include<stdio.h>
int main ()
{
	int A, B, X;
	scanf("%d%d%d",&A,&B,&X);
	if(X<=A+B && X>A || X==A)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}