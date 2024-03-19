#include<stdio.h>

int main(){
  char s[3];
  scanf("%s", &s);

  int cnt = 0;
  for (int i=0; i<3; i++) {
    if (s[i]=='1') {
      cnt++;
    }
  }

  printf("%d\n", cnt);

  return 0;
}