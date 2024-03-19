#include<stdio.h>

int main(void)
{
	int a,b,c,d,e,f;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f) != EOF){
	
	double y = ((c*d-a*f)/(b*d-a*e));
	double x = ((c-b*y)/a);
	
	printf("%0.3f %0.3f\n", (double)x,(double)y);
	}
	return 0;
}