#include<stdio.h>
int main()
{
	int A,B,C,D,E;
	scanf("%d%d%d%d",&A,&B,&C,&D);
	if(C<B)
	{
	   E=B-A-C;
	  printf("%d",E);
	}
	else
	{ 
	printf("0");
	} 
	return 0;
}
