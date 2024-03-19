#include <stdio.h>

int main(void){
  int l,r;
  scanf("%d", &l);
  scanf("%d", &r);

  int min=2019;
  
  if(r-l>=2019-1){
    min=0;
    printf("%d", min);
    return 0;
  }
  
  int i,j;
  
  for(i=l; i<=r-1; i++){
    for(j=i+1; j<=r; j++){
      if(((i*j)%2019)<min) min=(i*j)%2019;
    }
  }
  
  printf("%d", min);
  
  return 0;
}