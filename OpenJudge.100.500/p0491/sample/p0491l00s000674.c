#include <stdio.h>

int main()
{
  int x,k,n1,n2,p_min;
  int min,p,now;
  scanf("%d",&x);
  scanf("%d",&k);
  
  if(x>k){
    n1 = x; 
    n2 = k;
    p = 0;
  }
  else if(x==k)
   p = -1;
  else{
    n1 = k;
    n2 = x;
    p = 1;
  }
  min = x;
  
  if(p==0){
    while(1){
      p_min = min;
      now = n1 - n2;
      min = now;
      n1 = now;
      if(now<=0){
        min *= -1;
        break;
      }
    }
  }
  else if(p==1){
    now = n1 - n2;
    if(min>=now)
      min = now;
  }
  else
    min = 0;
  
  if(p==0){
  	if(p_min<min)
      min = p_min;
  }
  if(min<=x) printf("%d",min);
  else printf("%d",x);
  
  return 0;
}