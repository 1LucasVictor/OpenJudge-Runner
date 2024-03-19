#include <stdio.h>

int main(void) {
  int i,x,y,kame,turu,ans;
  i=0;
  x=0;
  y=0;
  kame=0;
  turu=0;
  ans=0;
  scanf("%d",&x);
  scanf("%d",&y);
  kame=(y-2*x)/2;
  turu=(4*x-y)/2;
  if(x%2==0||x%4==0)
  {
    printf("Yes");
  }
  else if(turu%1==0&&turu>0&&kame>0&&kame%1==0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}