#include <stdio.h>

int main(void){
  long int l,r;
  scanf("%ld %ld", &l, &r);

  int min=9999999;
  
  if(r-l>=2019-1){
    printf("0");
    return 0;
  }
  
  int i,j;
  
  for(i=l; i<=r-1; i++){
    for(j=i+1; j<=r; j++){
      if((i*j)%2019<min) min=(i*j)%2019;
      if(min==0){
        printf("0");
        return 0;
      }
    }
  }
  
  printf("%d", min);
  
  return 0;
}