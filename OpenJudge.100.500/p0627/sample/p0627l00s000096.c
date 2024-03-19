#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int a1,a2,a3;
	a1=a+b;
	a2=a-b;
	a3=a*b;
	int max=-9999999;
	if(a1>max) max=a1;
	if(a2>max) max=a2;
	if(a3>max) max=a3;
	printf("%d",max);
}