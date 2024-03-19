#include<stdio.h>

int main(void){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if((a == 5 && ((a == b && c == 7) || (a == c && b == 7))) || (b == 5 && b == c && a == 7)){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return 0;
}