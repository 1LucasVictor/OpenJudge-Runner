#include <stdio.h>

int main()
{
    double n[6];
	double x,y;

	while(scanf("%lf%lf%lf%lf%lf%lf",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5])!=EOF){
		x=((n[2]*n[4])-(n[1]*n[5]))/((n[0]*n[4])-(n[1]*n[3]));
		y=((n[2]*n[3])-(n[0]*n[5]))/((n[1]*n[3])-(n[0]*n[4]));
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}