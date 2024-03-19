#include<stdio.h>
int main()
{

int a,b,n,c,cost;
scanf("%d%d%d",&n,&a,&b);

if(n*a<=b)
{

 cost=(n*a);
}
else
    cost=b;
printf("%d",cost);


}
