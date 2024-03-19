#include<stdio.h>
int main()
{
	int a,b,s,s1,s2,mn;
	scanf("%d%d",&a,&b);
	s=a+b;
	s1=a-b;
	s2=a*b;
	if(s>=s1 && s>=s2)
	{
		printf("%d",s);
	}
	else if(s1>=s && s1>=s2)
	{
		printf("%d",s1);	
	}
	else
	{
	printf("%d",s2);
	}
	

	
}
	