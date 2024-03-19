#include<stdio.h>
int main()
{
int t,max,a,b,c,m,n,i;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d %d %d",&a,&b,&c);
max=a;
n=b*b+c*c;
if(b>max)
{max=b;
n=a*a+c*c;
}
if(c>max)
{max=c;
n=a*a+b*b;
}
m=max*max;
if(m==n)
printf("YES\n");
else
printf("NO\n");
}

return 0;
}