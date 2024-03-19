#include <stdio.h>

int main(void){
  int l,r;
  scanf("%d %d", &l, &r);
  
  int count=0;
  int min=9999999;
  
  for(int i=l; i<r-1; i++){
    for(int j=i+1; j<=r; j++){
      if((i*j)%2019<min) min=(i*j)%2019;
      count++;
      if(count>2019) break;
    }
    if(count>2019) break;
  }
  
  printf("%d", min);
  
  return 0;
}