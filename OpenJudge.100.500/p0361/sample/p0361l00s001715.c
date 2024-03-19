#include<stdio.h>
int main(){
int s,m,h,b;
scanf("%d",&s);
h=s/3600;
m=(s-h*3600)/60;
b=s%60;
printf("%d:%d:%d\n",h,m,b);
return 0;
}