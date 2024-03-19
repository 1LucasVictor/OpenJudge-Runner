#include <stdio.h>
int main()
{
  char s[200001];
  char t[200001];
  scanf("%s",&s);
  scanf("%s",&t);
  int cnt = 0;
  char *sp = s;
  char *tp = t;
  while (*sp)
  {
    if (*sp - *tp != 0)
      cnt++;
    sp++;
    tp++;
  }
  printf("%d\n",cnt);
}