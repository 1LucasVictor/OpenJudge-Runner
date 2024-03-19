#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
  char str[1500];
  int n;
  int i;
  
  fgets(str,1200,stdin);
  n=strlen(str);
  for (i=0; i<n; i++) {
    if ('a'<=str[i] && str[i]<='z') {
      str[i]=toupper(str[i]);
    }
    else if ('A'<=str[i] && str[i]<='Z') {
      str[i]=tolower(str[i]);
    }
  }
  printf("%s",str);
  return 0;
}