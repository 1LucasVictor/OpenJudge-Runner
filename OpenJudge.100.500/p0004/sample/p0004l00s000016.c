#include<stdio.h>

int gcd(int x,int y){
	int z;
	
	do{
		z=x%y;
		x=y;
		y=z;
	}while(y!=0);
	return x;
}

int lcm(int x,int y){
	int z;
	z=gcd(x,y);
	z=x/z*y;
	return z;
}

int main()
{
	int num1,num2;
	
	while(scanf("%d %d",&num1,&num2)>0)
	{
		printf("%d %d\n",gcd(num1,num2),lcm(num1,num2));
	}
	return 0;
}