#include <stdio.h>

int main(){
  int n;
  char *s[10];
  scanf("%d",&n);
  s[0] = "pon";
  s[1] = "pon";
  s[2] = "hon";
  s[3] = "bon";
  s[4] = "hon";
  s[5] = "hon";
  s[6] = "pon";
  s[7] = "hon";
  s[8] = "pon";
  s[9] = "hon";
  printf(s[n%10]);
  return 0;
}
