#include<stdio.h>
int main(void){
    int S,h,m,s,x;
scanf("%d",&S);
h=S/3600;
x=S%3600;
m=x/60;s=
x%60;
printf("%d:%d:%d\n",h,m,s);
return 0;
}