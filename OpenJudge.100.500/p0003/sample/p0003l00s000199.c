#include <stdio.h>

int main(void)
{
int a,b,c,d,e,f,i;
double x[2];
while(scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f)!=EOF)
{
x[0]=((double)(c*e-b*f))/(a*e-b*d),x[1]=((double)(a*f-c*d))/(a*e-b*d);
for(i=0;i<2;i++)
{
if(x[i]>=0) x[i]=((int)(1000*x[i]+0.5))/1000.0;
else x[i]=-((int)(-1000*x[i]+0.5))/1000.0;
}
printf("%.3f %.3f\n",x[0],x[1]);
}
return 0;
}