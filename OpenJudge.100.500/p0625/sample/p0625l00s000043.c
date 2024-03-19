#include<stdio.h>
int main()
{
	int a,b,res,x;
	scanf("%d %d",&a,&b);
	if(a>=b)
	{
		res=a-b;
		if(res==0 || res==1)
		x=1;
		else
		x=0;
	}
	else
	x=0;
	if(x==1)
	printf("Yay!");
	else
	printf(":(");
	return 0;
}
	