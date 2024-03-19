#include<stdio.h>

int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4;
	double vector[2][2];
	int datanum,i;
	scanf("%d",&datanum);
	for(i=0;i<datanum;i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		
		vector[0][0]=x1-x2;
		vector[0][1]=y1-y2;
		vector[1][0]=x3-x4;
		vector[1][1]=y3-y4;

		if(vector[0][0]!=0)
		{
			vector[1][0]*=(vector[0][0]/vector[1][0]);
			vector[1][1]*=(vector[0][0]/vector[1][1]);
		}
		else
		{
			vector[1][0]*=(vector[0][1]/vector[1][0]);
			vector[1][1]*=(vector[0][1]/vector[1][1]);
		}
		
		if(vector[0][0]==vector[1][0]&&vector[0][1]==vector[1][1])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}