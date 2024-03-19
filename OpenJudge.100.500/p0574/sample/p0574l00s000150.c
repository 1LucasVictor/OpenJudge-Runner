#include <stdio.h>

int main(){
  char a, b, c, d;
  scanf(" %c", &a);
  scanf(" %c", &b);
  scanf(" %c", &c);
  scanf(" %c", &d);
  if((a == b) || (b == c) || (c == d)){
    printf("Bad\n");
  }else{
    printf("Good\n");
  }
  return 0;
}
