#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
	//float n,m;
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF)
    {
    	printf("%.3f %.3f\n",(c*e-b*f+0.0)/(0.0+a*e-b*d),(0.0+c*d-f*a)/(0.0+b*d-a*e));
    }
	return 0;
	
}