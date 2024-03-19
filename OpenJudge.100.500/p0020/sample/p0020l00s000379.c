#include <stdio.h>
#include <math.h>
int main(){
	double k1,k2,k3,x1,y1,x2,y2,x3,y3,x4,y4,p[10];
	int n,i,k,judge;
	//input
	scanf("%d",&i);
	for (k=1;k<=i;k++)
	{
		judge=0;
		for (n=1;n<9;n++)
		scanf("%lf",&p[n]);
		x1=p[1];y1=p[2];x2=p[3];y2=p[4];x3=p[5];y3=p[6];x4=p[7];y4=p[8];
		if (x1==x2)
		{
			if (x3==x4)
				judge=1;
			if (x1==x3)
				judge=0;
		}
		else
		{
			if (x3!=x4)
			{
				k1=(y2-y1)/(x2-x1);
				k2=(y4-y3)/(x4-x3);
				if (k1==k2)
					judge=1;
			}
		}
		if (judge==1)
		{
			k3=(y3-y1)/(x3-x1);
			if (k1==k3)
				judge=0;
		}
		if (judge==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
    return 0;
}