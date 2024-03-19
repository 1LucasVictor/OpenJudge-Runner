#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int m=0;
while(n!=0)
{
if(n%10==1) m++;
n=n/10;
}
printf("%d",m);
return 0;
}