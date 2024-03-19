#include<stdio.h>
int main()
{
	int a,b,c,d,time,temp;
	time=0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>c)
	{
		temp=a;
		a=c;
		c=temp;
		temp=b;
		b=d;
		d=temp;
	}
	if(a<=c)
	{
	if(b<=c)
	{
		time=0;
	}
	else
	{
	if(b<=d)
	time=b-c;
	else
	time=d-c;
	}
    }
    printf("%d",time);
    return 0;
 } 