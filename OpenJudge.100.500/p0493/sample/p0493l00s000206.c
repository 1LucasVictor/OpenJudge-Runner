#include <stdio.h>

int main() {
  int X,sum=0;
  scanf("%d",&X);
  if(X/500!=0) {
    sum+=(X/500)*1000;
    X = X%500;
  }
  if(X/5!=0) {
    sum+=(X/5)*5;
    X = X%5;
  }
  printf("%d",sum);
  return 0;
}