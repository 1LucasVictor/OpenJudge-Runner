#include <stdio.h>

int main(void){
  int n = 0;
  int d = 0;
  scanf("%d %d", &n, &d);
  
  int x = 0;
  int y = 0;
  int i = 0;
  int q = 0;
  
  for(; i < n; i++){
    scanf("%d %d", &x, &y);
    if(((x * x) + (y * y)) <= (d * d)){
      q++;
    }
  }
  
  printf("%d", q);
  return 0;
}