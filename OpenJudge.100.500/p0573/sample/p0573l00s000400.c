#include<stdio.h>

int main() {
  char a[4];
  for(int i = 0; i < 4; i++) {
    scanf("%c", a[i]);
  }
  for(int i = 0; i < 3; i++) {
    if(a[i] > a[i+1]) {
      char tmp = a[i];
      a[i] = a[i+1];
      a[i] = tmp;
    }
  }
  if(a[0] == a[1] && a[2] == a[3]) {
    puts("Yes");
  } else {
    puts("No");
  }
  return 0;
}