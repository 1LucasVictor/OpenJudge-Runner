#include<stdio.h>

int main()
{
	float x1,y1,x2,y2,x3,y3,x4,y4;
	int flg;
	int datanum,i;
	scanf("%d",&datanum);
	for(i=0;i<datanum;i++)
	{
		flg=0;
		scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if((y1-y2)/(x1-x2)==(y3-y4)/(x3-x4))
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