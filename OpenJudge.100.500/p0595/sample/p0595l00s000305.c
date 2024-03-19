#include<stdio.h>
int main()
{
 int a,b,k,i,j=1,m=0,f=0,z;
scanf("%d%d%d",&a,&b,&k);
while(f==0)
{
if(a%j==0&&b%j==0)
 m++;
if(m==k)
 {f=1;
z=j;}
j++;
}
printf("%d",z);
return 0;}
  
