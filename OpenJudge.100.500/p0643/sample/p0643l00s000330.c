#include<stdio.h>
int main()
{
	int a,b,p;
	scanf("%d %d",&a,&b);
	
   p=a*b;
   
   if(p%2==0) printf("Even\n");
   else printf("Odd\n");
   
	
	return 0;
}