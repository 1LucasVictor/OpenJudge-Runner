#include<stdio.h>
int main()
{
	int A,B,C,d,sum;
	d=17;
	scanf("%d %d %d",&A,&B,&C);
	sum=(A==5||A==7)+(B==5||B==7)+(C==5||C==7);
	if(sum==3)
	{
		if((A==7&&B==7)||(A==7&&C==7)||(B==7&&C==7))
		{
			printf("NO");
		}
		else
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
 } 