#include <stdio.h>

int main()
{
  int x,k;
  int min,p_x,now;
  scanf("%d",&x);
  scanf("%d",&k);
 
  p_x = x;
  now = k - x;
  if(now<0) now*=-1;
  x = now;
  
  min = x;
  while(1){
    now = k - x;
    if(now<0) now*=-1;
    if(min>now){
      min = now;
      x = min;
    }
    else
      break;
  }
  if(min<p_x) printf("%d",min);
  else printf("%d",x);
  return 0;
}