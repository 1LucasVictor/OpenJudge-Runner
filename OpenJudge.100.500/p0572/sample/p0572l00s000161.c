#include <stdio.h>

int main(void){
  int l,r;
  scanf("%d %d", &l, &r);
  
  int count=0;
  int min=9999999;
  if(r-l>2019){
    printf("0");
    return 0;
  }
  for(int i=l; i<=r-1; i++){
    for(int j=i+1; j<=r; j++){
      if((i%2019*j%2019)%2019<min) min=(i%2019*j%2019)%2019;
      if(min==0) break;
      //count++;
      //if(count>2019) break;
    }
    //if(count>2019) break;
    if(min==0) break;
  }
  
  printf("%d", min);
  
  return 0;
}