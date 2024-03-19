#include <stdio.h>

int main(void){
  int l, r;
  scanf("%d%d", &l, &r);
  int i=l, j=l;
  int min=2020;
  int a;
  for(i=l; i<r+1; i++){
    for(j=l; j<r+1; j++){
      if(j<=i){
        continue;
      }else{
        a=i*j%2019;
        if(a <= min){
          min=a;
        }
      }
    }
  }
  
  printf("%d\n", min);
  
  return 0;
}