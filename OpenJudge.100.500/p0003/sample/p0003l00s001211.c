#include<stdio.h>

int main(void){
int a,b,c,d,e,f;
while(scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f) !=EOF){
double x,y;
x=(c*e-b*f)/(a*e-b*d),y=(a*f-c*d)/(a*e-b*d);
printf("%.3f %.3f\n",x,y);
}
return 0;
}