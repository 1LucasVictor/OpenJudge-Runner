#include<stdio.h>
int main()
{
 
 int a,c,d,e,k,j,b,l,m=0;
scanf("%d%d%d",&a,&b,&c);
m=b;
while(1)
{
 if(m%a==0)
{
printf("OK\n");
break;
}
if(m>=c)
{
printf("NG\n");
break;
}
m++;
}
return 0;
}