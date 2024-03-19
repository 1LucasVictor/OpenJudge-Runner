#include<stdio.h>
int main(){
int a,b,c,d,e,f;
while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
float x=(c*e-b*f)/(a*e-b*d);
if(x==0) x=0;
float y=(float)(c*d-a*f)/(b*d-e*a);
if(y==0) y=0;
printf("%.3f %.3f\n",x,y);
}
return 0;
}