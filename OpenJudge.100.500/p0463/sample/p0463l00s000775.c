#include <stdio.h>

int main() {
  int N;
  scanf("%d",&N);
  if(N<=999) {
    N = N%10%10;
    if(N==3) {
      printf("bon");
    }else if(N==0 || N==1 || N==6 || N==8) {
      printf("pon");
    }else {
      printf("hon");
    }
  }
  return 0;
}