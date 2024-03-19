#include<stdio.h>
int main()
{
int a,c=0,r;
scanf("%d",&a);
while(a>0)
{
r=a%10;
if(r==1)
c++;
a=a/10;
}
printf("%d",c);
return 0;
}