#include <stdio.h>
#include <stdlib.h>

int top, S[100];

int pop(){
    return S[top--];
}

void push(int x){
    S[++top]=x;
}

int main(){
  int x, a, b;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
        a=pop();
        b=pop();
        push(a+b);
    } else if ( s[0] == '-' ){
        a=pop();
        b=pop();
        push(b-a);
    } else if ( s[0] == '*' ){
        a=pop();
        b=pop();
        push(a*b);
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n", pop());
  return 0;
}
