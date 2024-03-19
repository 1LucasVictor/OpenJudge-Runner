#include<stdio.h>
void main()
{
long n,h=0,p=0;
scanf("%d",&n);
while(n>0)
{
if(n>500)
{
p=n/500;
h=(p*1000);
n=n%500;
}
else if(n>5)
{
p=n/5;
h=h+(p*5);
n=n%5;
}
else
break;
}
printf("%d",h);
}


