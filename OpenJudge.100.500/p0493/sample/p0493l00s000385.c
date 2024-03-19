#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d",&a);
b=a/500;
c=a-b*500;
d=c/5;
printf("%d\n",b*1000+d*5);



return 0;}