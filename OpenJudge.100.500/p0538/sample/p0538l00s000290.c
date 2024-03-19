#include<stdio.h>
int main()
{
int a,b,c1=0,c2=0,p,q;
scanf("%d",&a);
scanf("%d",&b);
p=a;
q=b;
while(a!=0)
{
  a=a/10;
  c1++;
}
while(b!=0)
{
  b=b/10;
  c2++;
}
if((c1==1)&&(c2==1))
{
printf("%d",p*q);
}
else 
printf("-1");
return 0;
}    

