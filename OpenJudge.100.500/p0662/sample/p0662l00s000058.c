#include<stdio.h>
#include<math.h>
int main()
{
	int A,B,C,D,m,n,k;
	
	scanf("%d%d%d%d",&A,&B,&C,&D);
	
	//if(A>=0 && A<=100 && B>A && B<=100 && C>=0 && C<=100 && D>C && D<=100)
//	{
		if(C>=B)
			k=0;
			
		else
		{
			if(A>C)
				m=A;
			else
				m=C;
			if(B>D)
				n=D;
			else
				n=B;
				k=fabs(n-m);
		}
		printf("%d",k);
//	}
	
	
	return 0;
}