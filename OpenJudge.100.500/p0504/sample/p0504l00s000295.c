#include <stdio.h>

int main(void) {
  /* code */
  int h, a;
  int result;
  scanf("%d %d", &h, &a );
  if(h%a==0)
    result = h/a;
  else
    result = h/a +1;
  
  printf("%d", result);
  return 0;
}