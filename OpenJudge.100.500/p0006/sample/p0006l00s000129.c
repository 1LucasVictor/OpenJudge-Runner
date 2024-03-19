#include <stdio.h>
int main(void)
{
  int i,d,n;
  d=100000;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    d+=d*5/100;
    if(d%1000)
      d=d-(d%1000)+1000;
  }
  printf("%d\n",d);
  return 0;
}