#include<stdio.h>
main()
{
int i,j,a,b,c,count;
while(scanf("%d%d",&a,&b)!=-1)
{
count=1;
c=a+b;
if(c>0&&c<10)
printf("%d",count);
else
{
for(i=9,j=100;i<=1000000,j<=1000000;i=(i*10+9),j=(j*10))
{
count++;
if(c>i&&c<j)
printf("%d\n",count);
}
}
}
return 0;
}