#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(4*x<y||y%2!=0)printf("No");
	else
	{
		if(y==4&&x==1||y==2&&x==1)printf("Yes");
		else
		{
			if(3*x-y>=0&&y-2*x>=0)
			{
				if((x>1&&3*x-y>1&&y-2*x==0)||(x>1&&3*x-y==0&&y-2*x>1))printf("No");
				else printf("Yes");
			}
			else printf("No");
		}
	}
}