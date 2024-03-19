#include <stdio.h>
int main()
{
  int a,b,t;
  int x;
  scanf("%d %d %d",&a,&b,&t);
  if(a>=1 && a<=20 && b>=1 && b<=20 && t>=1 && t<=20){
  	x = (t+0.5)/a;
    printf("%d\n",x*b);
  }
  return 0;
}
  
  