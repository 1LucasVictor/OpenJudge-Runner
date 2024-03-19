#include<stdio.h>
int main ()
{
	int A, B, x, y, z;
	scanf("%d%d", &A, &B);
	
	x=A+B;
	y=A-B;
	z=A*B;
	
	if(x>y && x>z)
	{
		printf("%d", x);
	}
	else if(y>x && y>z)
	{
		printf("%d", y);
	}
	else 
	{
		printf("%d", z);
	}
	return 0;
}