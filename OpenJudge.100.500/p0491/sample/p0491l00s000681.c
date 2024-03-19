#include <stdio.h>

int main(void){
  
  int n,k,min;
  scanf("%d %d",&n,&k);
  
  while(1){
    
    min=n;
    
    n=n-k;
    if(n<0) n*=-1;
    
    if(min<=n) break;
    
  }
  
  printf("%d",min);
  
  return 0;
}