#include<stdio.h>
#include<math.h>
int main()
{
long long int i,j=0,n,d;
double p,x,y;
scanf("%lld%lld",&n,&d);
for(i=0;i<n;i++)
{
scanf("%lf%lf",&x,&y);
p=sqrt(x*x+y*y);
if(p<=d)
j++;
}
printf("%lld",j);
return 0;
}



