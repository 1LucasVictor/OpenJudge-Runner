#include<stdio.h>
#include<math.h>
int main ()
{
	int A,B,C,D,m,n,s;
	while(scanf("%d %d %d %d",&A,&B,&C,&D)!=EOF)
	{
		if(A>C)
		m=A;
		else
		m=C;
		if(B>D)
		n=D;
		else
		n=B;
		s=n-m;
		if(s<0)
		printf("0\n");
		else
		printf("%d\n",s);
	}
	return 0;
}