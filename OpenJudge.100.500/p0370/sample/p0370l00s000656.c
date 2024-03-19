#include<stdio.h>
int main()
{
char op;
int a,b;
int c;
for(;;)
{
scanf("%d %c %d",&a,&op,&b);
if(op=='+')
{
c=a+b;
}
else if(op=='-')
{
c=a-b;
}
else if(op=='*')
{
c=a*b;
}
else if(op=='/')
{
c=a/b;
}
else
{
break;
}
printf("%d\n",c);
}
return 0;
}