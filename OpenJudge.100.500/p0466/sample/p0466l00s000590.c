#include<stdio.h>

int main()
{
  char s[11], t[12];
  scanf("%s", s);
  scanf("%s", t);
  
  int i = 0, isSatisfied = 1;
  while (s[i] != '\0') {
    if (s[i] != t[i]) {
      isSatisfied = 0;
      break;
    }
    i++;
  }
  
  (isSatisfied == 1) ? puts("Yes\n") : puts("No\n");
  
  return 0;
}