#include<stdio.h>
int main(){
int s,h,m,x;
scanf("%d",&s);
h=s/3600;
m=(s-3600*h)/60;
x=s-3600*h-60*m;
printf("%d:%d:%d\n",h,m,x);
return 0;
}
