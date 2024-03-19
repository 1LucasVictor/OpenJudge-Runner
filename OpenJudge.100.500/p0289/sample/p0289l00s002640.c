#include<stdio.h>


int main()
{
	int a, b,ucln,i;
	scanf("%d%d",&a,&b);

	if(a>b)
	{
		for( i=1 ; i < b;i++)
			if((a%i==0) && (b%i==0))
				ucln=i;
	}
	

	printf("%d",ucln);

}