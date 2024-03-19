#include<stdio.h>
int main()
{	int sum=0,a,b,t;
	scanf("%d %d %d",&a,&b,&t);
	
	sum+=(t/a)*b;
	printf("%d",sum);
return 0;
}