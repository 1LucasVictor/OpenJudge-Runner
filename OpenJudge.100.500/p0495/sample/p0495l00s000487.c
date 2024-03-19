#include <stdio.h>
#include <string.h>

#define len 3

int main(void) {
  char s[4];
  int count = 0;
  scanf("%s", s);
  for(int i = 0; i < len - 1; i++) {
    if(s[i] != s[i+1]) {
      count++;
    }
  }
  if(s[len-1] != s[0]) {
    count++;
  }
  if(count > 0) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
