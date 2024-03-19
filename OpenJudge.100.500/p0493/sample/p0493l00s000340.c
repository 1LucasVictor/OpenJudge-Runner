#include<stdio.h>
int main()
{
  int X,ure;
  scanf("%d",&X);
  if(X>=500)
  {
    ure=1000*(X/500);
    X=X-500*(X/500);
    if(X>=5)
    {
      ure=ure+5*(X/5);
    }
  }
  printf("%d",ure);
}
      