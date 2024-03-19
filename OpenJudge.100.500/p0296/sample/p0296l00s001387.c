#include <stdio.h>

int main() {
  int i = 0;
  char c;
  long a[3],temp;

  while(scanf("%c ", &c) > 0) {
    if(c<'0' || c>'9') {
      switch (c) {
      case '+':
	temp = a[i-2] + a[i-1];
	break;
      case '-':
	temp = a[i-2] - a[i-1];
	break;
      case '*':
	temp = a[i-2] * a[i-1];
	break;
      default:
	break;
      }
      a[i-2] = temp;
      i = i-1;
    }else{
      a[i] = (long)c - '0';
      i++;
    }
  }
  printf("%ld\n", a[0]);

  return 0;
}