#include<stdio.h>
#include<stdlib.h>

int main(){
  int x = 0, top = 0, stack[100];
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      stack[top-2] = stack[top-2] + stack[top-1];
      top -= 1;
    } else if ( s[0] == '-' ){
      stack[top-2] = stack[top-2] - stack[top-1];
      top -= 1;
    } else if ( s[0] == '*' ){
      stack[top-2] = stack[top-2] * stack[top-1];
      top -= 1;
    } else {
      stack[top] = atoi(s);
      top += 1;
    }
  }

  printf("%d\n",stack[top-1]);

  return 0;
}