#include<stdio.h>
int main(void)
{
	int x,sum,a,b,c,d;
	do {
		scanf("%d",&x);
		sum=0;
		if(x==0)
		{
		break;
		}
		a=x/1000;
		b=(x-1000*a)/100;
		c=(x-1000*a-100*b)/10;
		d=x-1000*a-100*b-10*c;
		sum=sum+a+b+c+d;
		printf("%d\n",sum);
	}while(1);
	return 0;
}