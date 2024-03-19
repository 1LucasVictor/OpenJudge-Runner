#include <stdio.h>
 
int main(void) {
  int i,x,y,ans,turu,kame;
  i=0;
  x=0;
  y=0;
  kame=0;
  turu=0;
  ans=0;
  scanf("%d",&x);
  scanf("%d",&y);
  kame=(y-2*x)*4/2;
  turu=(4*x-y)*2/2;
  if(x*2==y||x*4==y)
  {
    printf("Yes");
  }
  else if(4*x<y||2*x>y)
  {
    printf("No");
  }
  else if(turu%2==0&&kame%4==0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}