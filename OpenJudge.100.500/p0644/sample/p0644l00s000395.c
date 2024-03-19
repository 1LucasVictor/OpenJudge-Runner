#include<stdio.h>
int main(void) {
  int count = 0,i;
  char s[3];
  scanf("%s", s);
  for (i=0 ; i<=2 ; i++) {
    if (s[i] == '1'){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}