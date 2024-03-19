#include "stdio.h"

int main(){
  int i, p, a[5] = {};

  for(p = 0; p < 4; p++){
    scanf("%1d", &a[p]);
  }
  for(i = 0; i < 3; i++){
    if(a[i] == a[i + 1]){
      printf("Bad");
      return 0;
    }
  }
  printf("Good");
  return 0;
}
