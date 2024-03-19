#include<stdio.h>
int main(void)
{
	int	x,a,b,c,d,e,f;
	scanf("%d",&x);
	c=x%500;
	if(x%500==0){
		a=x/500;
		b=a*1000;
		printf("%d\n",b);
	}
	else if(c%5<5){
		a=x/500;
		b=a*1000;
		d=c/5;
		e=d*5;
		f=b+e;
		printf("%d\n",f);
	}
	return 0;
}