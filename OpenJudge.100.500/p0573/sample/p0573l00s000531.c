#include<stdio.h>
#include<stdlib.h>

int main(void) {
  char s[4];
  char a, b;
  scanf("%s", s);
  a = s[0];
  if(s[1] == a) {
    if (s[2] == s[3] && s[2] != a) {
      printf("Yes\n");
      return 0;
    }
    else {
      printf("No\n");
      return 0;
    }
  }
  else {
    b = s[1];
    if(s[2] == a) {
      if(s[3] == b) {
        printf("Yes\n");
        return 0;
      }
      else {
        printf("No\n");
        return 0;
      }
    }
    else if(s[2] == b) {
      if(s[3] == a) {
        printf("Yes\n");
        return 0;
      }
    }
    else {
      printf("No\n");
      return 0;
    }
  }
}
