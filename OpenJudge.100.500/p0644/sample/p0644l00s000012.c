#include <stdio.h>
int main()
{
  int cnt=0;
  char s[4];
  scanf("%s", s);
  for (int i=0; i<3; i++) {
    if (s[i]=='1') cnt++;
  }
  printf("%d\n", cnt);
  return 0;
}