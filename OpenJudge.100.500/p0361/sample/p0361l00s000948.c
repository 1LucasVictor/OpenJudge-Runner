#include<stdio.h>

int main(void)
{
int sn,h,m,s;
scanf("%d",&sn);
h = sn/3600;
m = (sn-(h*3600))/60;
s = sn-h*3600-m*60;
printf("%d:%d:%d\n",h,m,s);
return 0;
}