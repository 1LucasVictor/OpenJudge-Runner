#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX(X, Y) ((X > Y)? X : Y)
#define MIN(X, Y) ((X < Y)? X : Y)
//　10min
int main(void){
  int ans;
  int a, b, c;
  
  scanf("%d%d%d", &a, &b, &c);

  ans = c - (a - b);
  if(ans < 0){
    ans = 0;
  }
  
  printf("%d\n", ans);

  return 0;
}