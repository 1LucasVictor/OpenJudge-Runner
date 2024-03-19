#include <stdio.h>
#include<string.h>
int main(void) {
  int a, b, c, tmp;
  scanf("%d %d %d", &a, &b, &c);
  if(a > b){
    tmp = b;
    b = a;
    a = tmp;
  }
  if(b > c){
    tmp = c;
    c = b;
    b = tmp;
  }
  if(a == 5 && b == 5 && c == 7)
    printf("YES\n");
  else {
    printf("NO\n");
  }
  return 0;
}