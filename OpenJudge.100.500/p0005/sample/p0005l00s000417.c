#include<stdio.h>
#include<string.h>
  
int main() {
  char str[20];
  int i;
  
  scanf("%s", str);
  for (i = strlen(str); i > 0 && i <= 20; i--) {
    printf("%c", str[i - 1]);  
  };
  
  return 0;
}