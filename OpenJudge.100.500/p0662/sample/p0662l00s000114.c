#include <stdio.h>
int main(void)
{
int a,b,c,d,x,y;
 scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>c)
{x=a;}else{x=c;}
if(b>d){y=d;}else{y=b;}
x=y-x;
if(x>0){printf("%d",x);}
else{printf("0");}
  return 0;
}