#include<stdio.h>

int main(void)
{
int x,y,z,a,b,c;
scanf("%d %d",&a);
x=a/3600;
y=a%3600/60;
z=a%60;
printf("%d:%d:%d\n",x,y,z);


return 0;
}
