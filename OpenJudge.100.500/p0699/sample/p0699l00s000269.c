#include<stdio.h>
int main()
{
	int a,b,c,i=0,count=0,flag=0;
	scanf("%d%d%d",&a,&b,&c);
	int d[3]={a,b,c};
	for(i=0;i<3;i++)
	{
		if(d[i]==5)
		{count++;}
		if(d[i]==7)
		{flag=1;}
	}
	if(count==2&&flag==1)
	{
		printf("YES");
	}
	else
	{printf("NO");}
	return 0;
 } 