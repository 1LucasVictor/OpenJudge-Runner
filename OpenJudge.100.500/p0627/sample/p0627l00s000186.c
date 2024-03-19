#include<stdio.h>
main()
{
int a, b, c, d, e, max=-11111;
scanf("%d%d",&a, &b); 
c=a-b;
if(c>max)
max=c;
d=a*b;
if(d>max)
max=d;
e=a+b;
if(e>max)
max=e;
printf("%d",max); 
return 0;
}