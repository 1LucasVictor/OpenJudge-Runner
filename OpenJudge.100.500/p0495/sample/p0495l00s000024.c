#include <stdio.h>
int main() {
  char a, b, c;
  scanf("%c%c%c",&a,&b,&c);
  int x =  a+b+c;
  if(x == 65*3 || x == 66*3)
    printf("No");
  else
    printf("Yes");
  return 0;
}