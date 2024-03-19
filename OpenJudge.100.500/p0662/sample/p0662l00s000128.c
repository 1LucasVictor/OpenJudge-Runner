#include<stdio.h>
int main (void)
{
	int a1,b1,a2,b2;
	scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
	if(a1>a2)
	{
	     int t=a1;
	     a1=a2;
	     a2=t;
	     int p=b1;
	     b1=b2;
	     b2=p;
	}
	if(a2>=b1)
	printf("0\n");
	else
	{
		int min=b1;
		if(min>b2)
		min=b2;
		printf("%d\n",min-a2);
	}
	return 0;
}