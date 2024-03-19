#include <stdio.h>
#include <string.h>

int main() {
  
  char s[20], s2[20];
  int n, a;
  scanf("%s", &s);
  
  n = strlen(s);
  
  for (a = 0; a < n; a++) {
    s2[n-a-1] = s[a];
  }
  
  s2[n] = '\0';
  printf("%s\n", s2);
  
  return 0;
}