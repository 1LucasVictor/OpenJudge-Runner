#include <stdio.h>

int main(void){
int a,b,c,d,e,f;
double x,y;
while(scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f)!=EOF)
{
x=((double)(c*e-b*f))/(a*e-b*d),y=((double)(a*f-c*d))/(a*e-b*d);
printf("%.3f %.3f\n",x,y);
}
return 0;
}