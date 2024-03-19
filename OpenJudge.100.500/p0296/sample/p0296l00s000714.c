#include <stdio.h>
int main(){
  int top,stack[101];
  char input[8];

  top = 0;
  while( scanf("%s",input) != EOF ){
    if( '+' == input[0] ){
      top--;
      stack[top] += stack[top+1];
    }
    else if( '-' == input[0] ){
      top--;
      stack[top] -= stack[top+1];
    }
    else if( '*' == input[0] ){
      top--;
      stack[top] *= stack[top+1];
    }
    else{
      top++;
      stack[top] = atoi(input);
    }
  }
  printf("%d\n",stack[top]);
  return 0;
}