#include<stdio.h>
int main ( )
{
	int A,B,x=0,y=0,z=0,max=0;
	scanf("%d%d",&A,&B);
	
	x=A+B;
	y=A-B;
	z=A*B;
	
	if(x>=y && x>=z)
	{
		max=x;
	}
	else if(y>=x && y>=z)
	{
		max=y;
	}
	
	else
	{
		max=z;
	}
	
	printf("%d\n",max);
	
	return 0;
	
}
	
	