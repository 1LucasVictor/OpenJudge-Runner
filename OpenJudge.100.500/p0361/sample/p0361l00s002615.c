#include<stdio.h>
int main(void)
{
int a,b,c;
scanf("%d",&a);
printf("%d",a/3600);
b=a%3600;
printf(":%d:",b/60);
c=b%60;
printf("%d\n",c);
return 0;
}
