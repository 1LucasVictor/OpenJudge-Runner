#include <stdio.h>
int main (void)
{
   
	int a,b,c,A,B;
	
	
	scanf("%d ",&a);
	scanf("%d ",&b);
	if(a<b)
	{
		A = a;

		B = b;
	}
	else
	{
		A = b;

		B = a;
	}

	scanf("%d",&c);
	
	if(A<c)
	{
		if(B<c)
		{
			printf("%d %d %d\n",A,B,c);
		}
		else
		{
			printf("%d %d %d\n",A,c,B);
		}
	}
	
	if(A>c)
	{
		printf("%d %d %d\n",c,A,B);
	}
	
     return 0;
}