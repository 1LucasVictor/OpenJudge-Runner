#include <stdio.h>

int main(){
  int h=0;
  int a=0;
  int count=0;

  scanf("%d %d", &h, &a);
  while(h > 0){
    h = h - a;
    count++;
  }
  printf("%d\n", count);
  return 0;
}