#include <stdio.h>

int main(void)
{
	int a,b,c,d,e,f;
	float x,y;
	
	
	while((scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f))!=EOF){
		x = (float)((c*e-f*b)/(a*e-d*b));
		y = (float)((a*f-d*c)/(a*e-d*b));
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}