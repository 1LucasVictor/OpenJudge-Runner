#include <stdio.h>

int main()
{
int x,h,f;

scanf("%d",&x);

h=x/500;
x%=500;
f=x/5;
printf("%d\n",1000*h+5*f);
return 0;
}