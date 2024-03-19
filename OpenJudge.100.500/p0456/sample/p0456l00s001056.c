#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  char s[200002], t[200002];
  scanf("%s", s);
  scanf("%s", t);
  int n=strlen(s);
  int c=0;
  for(int i=0;i<n;i++){
    if(s[i]!=t[i]) c++;
  }
  printf("%d", c);
  return 0;
}