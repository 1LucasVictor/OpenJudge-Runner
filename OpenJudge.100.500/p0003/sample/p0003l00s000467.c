#include <stdio.h>

int main(void)
{
	int a,b,c,d,e,f;
	
	while((scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f))!=EOF){
		printf("%.3f %.3f\n",(float)((c*e-f*b)/(a*e-d*b)),(float)((a*f-d*c)/(a*e-d*b)));
	}
	return 0;
}