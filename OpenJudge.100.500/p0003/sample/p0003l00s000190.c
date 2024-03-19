#include<stdio.h>

int main(void){
float a,b,c,d,e,f;
float x,y;
while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF){
x=(f-e*c/b)/(d-e*a/b);
y=(c-a*x)/b;
printf("%.3f %.3f\n",x,y);
}
return 0;
}