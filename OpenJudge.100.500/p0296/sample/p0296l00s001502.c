#include <stdio.h>
#include <stdlib.h>

int main(){
  int a[128] = {}, i = 0, x, y;
  char in[100];
  while(scanf("%s", in) != EOF){
    switch(*in){
    case '+':
      x = a[--i];
      y = a[--i];
      a[i++] = y + x;;
      break;
    case '-':
      x = a[--i];
      y = a[--i];
      a[i++] = y - x;
      break;
    case '*':
      x = a[--i];
      y = a[--i];
      a[i++] = y * x;
      break;
    default:
      a[i++] = atoi(in);
      break;
    }
  }
  printf("%d\n", a[--i]);
  return 0;
}