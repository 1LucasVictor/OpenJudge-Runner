#include <stdio.h>

int main()
{
	double numA,numB,numC,numD,numE,numF;
	double x,y;
	while(scanf("%lf%lf%lf%lf%lf%lf",&numA,&numB,
		&numC,&numD,&numE,&numF)!=EOF)
	{
		x=(numE*numC-numB*numF)/(numA*numE-numB*numD);
		y=(numD*numC-numA*numF)/(numB*numD-numA*numE);
		printf("%.3f %.3f\n",x,y);
	}

	return 0;
}