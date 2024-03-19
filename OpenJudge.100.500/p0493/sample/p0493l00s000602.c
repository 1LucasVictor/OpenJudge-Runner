#include<stdio.h>
int main()
{
  int x;int h;
  scanf("%d",&x);
  if(x==0)
  {h=0;
    printf("%d",h);}
  else
  {
    int r500=x/500;
    x=x%500;
    int r5=x/5;
    h=(r500*1000)+(r5*5);
    printf("%d",h);
  }
  return 0;
}
