#include<stdio.h>

int main()
{
	float x1,y1,x2,y2,x3,y3,x4,y4,flg;
	int datanum,i;
	scanf("%d",&datanum);
	for(i=0;i<datanum;i++)
	{
		flg=0;
		scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if(x1==x2)
		{
			if(x3==x4)
			{
				flg=1;
			}
		}
		else if(x3==x4)
		{
			if(x1==x2)
			{
				flg=1;
			}
		}
		else if((y2-y1)/(x2-x1)==(y4-y3)/(x4-x3))
		{
			flg=1;
		}
		if(flg)
		{
			puts("YES");
		}
		else
		{
			puts("NO");
		}
	}
	return 0;
}