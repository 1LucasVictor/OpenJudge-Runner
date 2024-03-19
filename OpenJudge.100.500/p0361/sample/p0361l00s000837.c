#include<stdio.h>
int main()
{
int S,h,m,s,q;
scanf("%d",&S);
h=S/3600;
q=S%3600;
m=q/60;
s=q%60;
printf("%d:%d:%d\n",h,m,s);
return 0;
}
