#include <stdio.h>
int main(void)
{
int S,h,m,s;
scanf("%d",&S);
0<=S&&S<=86400;
s=S%60;
m=S/60%60;
h=S/3600;

printf("%d:%d:%d\n",h,m,s);
return 0;
}