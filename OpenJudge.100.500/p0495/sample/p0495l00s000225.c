#include <stdio.h>
int main(){
  char s0 = getchar();
  char s1 = getchar();
  if (s0 != s1) {
    puts("Yes");
    return 0;
  }
  char s2 = getchar();
  if (s0 != s2) {
    puts("Yes");
    return 0;
  }
  puts("No");
  return 0;
}
