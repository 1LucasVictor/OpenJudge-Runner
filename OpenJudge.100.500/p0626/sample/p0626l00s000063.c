#include <stdio.h>
#include <math.h>
int main(){
	int d,n,x,z;
	scanf("%d %d",&d,&n);
	if (d==0)
	{
		x=1;
	}else if (d==1)
	{
		x=100;
	}else if (d==2)
	{
		x=10000;
	}
	z=x*n;
	printf("%d\n",z);
}