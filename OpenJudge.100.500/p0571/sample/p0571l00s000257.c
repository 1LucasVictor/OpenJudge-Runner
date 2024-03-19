#include<stdio.h>
int main()
{

int a,b,n,c,cost;
scanf("%d%d%d",&n,&a,&b);

if(4*a>=b)
{
 c=n/4;
 n=n%4;
 cost=(c*b)+(n*a);
}
else
    cost=n*a;
printf("%d",cost);


}
