#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		printf("%.3f %.3f\n",(c*e-b*f)*1.0/(a*e-b*d),(c*d-a*f)*1.0/(b*d-a*e));
	}
	return 0;
} 