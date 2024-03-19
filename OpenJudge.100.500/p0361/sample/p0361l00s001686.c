#include <stdio.h>
int main(void)
{
int S;
int h;
int m;
int s;
scanf("%d",&S);
h=S/3600;
s=S%60;
m=S%3600/60;
printf("%d:%d:%d\n", h,m,s);
return 0;
}