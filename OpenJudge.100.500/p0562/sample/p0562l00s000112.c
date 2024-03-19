#include <stdio.h>

int main() {
  int a, b;
  
  scanf("%d %d", &a, &b);
  
  if ((b / a) == 1 ) {
   	printf("%d\n", 1);
  }
  else if (b == 1 ) {
   	printf("%d\n", 0);
  }
  else {
   	printf("%d\n", (int)(b / a) + 1);   
  }
  
  return 0;
}