#include<stdio.h>
int main()
{
int a,b,c,i,j;
scanf("%d",&a);
scanf("%d %d",&b,&c);
for(i=0;b<c;i++)
{
b=b+a;
if(b<c)
{
printf("OK\n");
j=1;
break;
}
}
if(j!=1)printf("NG\n");
return 0;
}