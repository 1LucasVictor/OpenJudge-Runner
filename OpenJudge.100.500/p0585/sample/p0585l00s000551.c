#include<stdio.h>

int main(void){
  int a,b,c;
  int ans = 0;
  scanf("%d %d %d", &a, &b, &c);
  
  for(int i=1; a*i <= c; i++){
      ans = ans + b;
  }
  
  printf("%d", ans);
}