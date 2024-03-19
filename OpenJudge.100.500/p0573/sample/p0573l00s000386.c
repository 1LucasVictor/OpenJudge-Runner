#include <stdio.h>
#include <stdlib.h>
int compare(int a,int b,int c,int d,char s[4]) {
  return s[a] == s[b] && s[b] != s[c] && s[c] == s[d];
}
int main(void) {
  char s[4];
  int r;
  scanf("%s",s);
  r = compare(0,1,2,3,s);
  r |= compare(0,2,1,3,s);
  r |= compare(0,3,1,2,s);
  if(r) {
    puts("Yes");
  } else {
    puts("No");
  }
  return 0;
}
