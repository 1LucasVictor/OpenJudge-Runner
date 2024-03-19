#include <stdio.h>

int main(void) {
  char buf[10];
  fgets(buf, 5, stdin);
  
  if(buf[0] == buf[1] && buf[0] == buf[2])
    puts("No");
  else
    puts("Yes");
  
  return 0;
}