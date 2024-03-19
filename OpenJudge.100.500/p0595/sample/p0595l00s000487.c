#include<stdio.h>

int main(void){
  int a, b, c, i = 1, ans;
  scanf("%d %d %d", &a, &b, &c);
  
  while ( c ) {
    if ( !(a % i) && !(b % i) ) {
      c -= 1;
      ans = i;
    }
    i++;
  }
  printf("%d\n", ans);
  return 0;
}