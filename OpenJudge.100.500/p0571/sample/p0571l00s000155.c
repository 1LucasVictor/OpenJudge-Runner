#include<stdio.h>
int main()
{
int n,a,b;
scanf("%d%d%d",&n,&a,&b);
if(a>b)
printf("%d",n*b);
else
printf("%d",n*a);
return 0;
}
