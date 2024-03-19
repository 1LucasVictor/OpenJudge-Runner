#include <stdio.h>

int main(){

  int k,a,b;
  int x;
  int end=0;
  
  scanf("%d", &k);
  scanf("%d %d", &a, &b);
  
  for(int i = 0; ; i++){
    x = k * i;
    if(a <= x && x <= b){
      end = 1;
      break;
    }
    if(x > b){
      end = 0;
      break;
    }
  }
  if(end == 1){
    printf("OK");
  }
  if(end == 0){
    printf("NG");
  }
}
