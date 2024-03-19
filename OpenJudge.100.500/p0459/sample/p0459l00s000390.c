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
  kame=(y-2*x)/2*4;
  turu=y-kame;
  if((x==1&&y==2)||(x==1&&y==4))
  {
    printf("Yes");
  }
  else if(turu%2==0&&y>turu)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}