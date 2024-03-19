#include <stdio.h>
int main(){
	int a,b,c,d;
	int x=0;
	scanf("%d",&a);
	b=a%10;
	if (b==1)
	{
		x=x+1;
	}
	c=(a%100-b)/10;
	if (c==1)
	{
		x=x+1;
	}
	d=(a-b-c)/100;
	if (d==1)
	{
		x=x+1;
	}
	printf("%d\n",x);
}