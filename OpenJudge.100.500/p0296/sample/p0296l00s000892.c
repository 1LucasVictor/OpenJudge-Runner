#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int top,S[1000];

void push(int x){
  S[++top] = x;
}

int pop(){
  top--;
  return S[top+1];
}

int main(){
  int p,q;
  top = 0;
  char s[100];

  while(scanf("%s",s) != EOF){
    if(s[0] == '+'){
      p = pop();
      q = pop();
      push(p+q);
    }
      else if(s[0] == '-'){
        p = pop();
        q = pop();
        push(q-p);
      }
      else if(s[0] == '*'){
        p = pop();
        q = pop();
        push(p*q);
      }
      else push(atoi(s));
    }

    printf("%d\n",pop());
    return 0;
  }
