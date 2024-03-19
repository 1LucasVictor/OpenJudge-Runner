#include <stdio.h>

char str1[200005];
char str2[200005];

int main() {
  scanf("%s", str1);
  scanf("%s", str2);
  int i=0;
  int diff=0;
  while(str1[i]!='\0') { diff+=!(str1[i]==str2[i]); i++; }
  printf("%d", diff);
  return 0;
}
