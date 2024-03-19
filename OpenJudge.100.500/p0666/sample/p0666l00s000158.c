#include<stdio.h>

int main(){
  int x, a, b;
  
  scanf("%d %d %d", &x, &a, &b);
  
  if((-1)*a + b <= 0){
    printf("delicious\n");
  } else if((-1)*a + b <= x){
    printf("safe\n");
  } else {
    printf("dangerous\n");
  }
  
  return 0;
}