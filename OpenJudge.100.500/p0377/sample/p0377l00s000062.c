#include <stdio.h>

int main()
{
  int i, n, rank;
  int s[13] = {}, h[13] = {}, c[13] = {}, d[13] = {};
  char mark;
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf(" %c %d", &mark, &rank);
    switch(mark) {
      case 'S':
      s[rank-1] = 1;
      break;
      case 'H':
      h[rank-1] = 1;
      break;
      case 'C':
      c[rank-1] = 1;
      break;
      case 'D':
      d[rank-1] = 1;
      break;
    }
  }
  for(i = 0; i < 13; i++) {
    if(s[i] == 0) {
      printf("S %d\n", i + 1);
    }
  }
  for(i = 0; i < 13; i++) {
    if(h[i] == 0) {
      printf("H %d\n", i + 1);
    }
  }
  for(i = 0; i < 13; i++) {
    if(c[i] == 0) {
      printf("C %d\n", i + 1);
    }
  }
  for(i = 0; i < 13; i++) {
    if(d[i] == 0) {
      printf("D %d\n", i + 1);
    }
  }
  return 0;
}