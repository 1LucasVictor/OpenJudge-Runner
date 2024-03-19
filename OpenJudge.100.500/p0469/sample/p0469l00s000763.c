#include<stdio.h>
#include<math.h>
int main( )
{ 
	int n;
	int i;
	int a,b;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	for(i=a+1;i<b;i++)
	if(i%n==0)
	{printf("OK");return 0;}
	 printf("NG");return 0;
}