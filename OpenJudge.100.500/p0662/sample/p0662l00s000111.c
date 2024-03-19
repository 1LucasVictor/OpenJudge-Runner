#include<stdio.h>
int main()
{
	int A,B,C,D,E;
	scanf("%d%d%d%d",&A,&B,&C,&D);
    A>=0;
	B<=100;
    C>=0;
	D<=100;
	A<B,C<D;
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