#include <stdio.h>

int main(){
  int n, a, b;
  1 <= n <= 20;
  1 <= a <= 50;
  1 <= b <= 50;
  int na;
  
  	
  scanf("%d %d %d", &n, &a, &b);
  na = n * a;
  
  if(na <= b){
    printf("%d", na);
  }else if(b < na){
    printf("%d", b);
  }
  return 0;
}
  
    