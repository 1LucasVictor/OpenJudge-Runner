#include<stdio.h>
int main()
{
	int a,b,c,d,min,max;
	scanf("%d %d %d %d",&a,&b,&c,&d); 
	if(a>=d||b<=c)
	{
	printf("0\n");
	goto exit;
    }
	if(a<c)
	min=c;
	else
	{
	min=a;
	}
	if(b<d)
	 max=b;
	else
	{
	max=d;
	}
	printf("%d\n",max-min);
	exit:
	return 0;
}