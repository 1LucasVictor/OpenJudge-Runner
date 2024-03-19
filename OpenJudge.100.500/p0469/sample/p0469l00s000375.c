#include <stdio.h>
int main ()
{
	int K,A,B,X;
	scanf("%d",&K);
	scanf("%d %d",&A,&B);
	
	for(int i=A;i<=B;i++)
	{
		if (i%K==0)
		{
			X=0;
		}
    }
	if (X==0)
	{
		printf("OK");
	}
	else
	{
		printf("NG");
	}	
	
	return 0;
}