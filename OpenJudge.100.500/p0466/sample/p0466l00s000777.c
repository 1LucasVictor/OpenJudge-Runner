#include<stdio.h>
int main() {
  char s[11],t[12],a;
  scanf("%s",&s);
  scanf("%t",&t);
  t[12]=s[11]+a;
  if (t[12]-s[11]==a)
    printf("Yes");
  else
    printf("No");
  return 0;
}