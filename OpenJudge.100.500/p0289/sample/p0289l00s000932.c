#include <stdio.h>
int main(void)
{
  int x,y;
  int i;
  int j;
  int ans;
  
  scanf("%d",&x);
  scanf("%d",&y);

  if (x>y) j=x;
  else j=y;

  if (x==y) ans=x;
  else {
    for (i=1; i<j/2+1; i++) {
      if (x%i==0 && y%i==0) ans=i;
    }
  }
  printf("%d\n",ans);
  return 0;
}