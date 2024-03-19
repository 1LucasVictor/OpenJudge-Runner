#include<stdio.h>
int main(void)
{
	int A,B,C,D;
	int bc,da,dc,ba;
			
	scanf("%d%d%d%d",&A,&B,&C,&D);
	
	if(A < B && C < D)
	{
		if(A< B && C < D && B < C)
		{
			printf("0\n");
		}
		else if(A< B && C < D && D < A)
		{
			printf("0\n");
		}
		
		else if(A < C && B < D && C < B)
		{
			bc = B - C;
			printf("%d\n",bc);
		}
		else if(C < A && D < B && A < D)
		{
			da = D - A;
			printf("%d\n",da);
		}
		else if(A < C && D < B)
		{
			dc = D - C;
			printf("%d\n",dc);
		}
		else if(C < A && B < D)
		{
			ba = B - A;
			printf("%d\n",ba);
		}
	}
	else
	{
		printf("エラー");
	}
	
	return 0;
}