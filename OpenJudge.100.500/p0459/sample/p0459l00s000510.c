#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(4*x<y||y%2!=0)printf("No");
	else
	{
		if(y==4||y==2||2*x==y||4*x==y)printf("Yes");
		else
		{
			if(3*x-y>=0&&y-2*x>=0)printf("Yes");
			else printf("No");
		}
	}
}