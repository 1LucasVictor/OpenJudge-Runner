#include "stdio.h"

int main(){
  int i, p, a[4] = {};

  for(p = 0; p < 4; p++){
    scanf("%1d", &a[p]);
  }
  for(i = 0; i < 4; i++){
    if(a[i] == a[i + 1]){
      printf("Bad\n");
      return 0;
    }
  }
  printf("good\n");
  return 0;
}
