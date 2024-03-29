#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top, S[1000];
void push(int);
int pop();

int main(){
  int x, y;
  char s[100];

  top = 0;

  while(scanf("%s", s) != EOF){
    if(s[0] ==  '+'){
      x = pop();
      y = pop();
      push(x + y);
    }else if(s[0] == '-'){
      y = pop();
      x = pop();
      push(x - y);
    }else if(s[0] == '*'){
      x = pop();
      y = pop();
      push(x * y);
    }else{
      push(atoi(s));
    }
  }
  printf("%d\n", pop());
  
  return 0;
}

void push(int x){
  top++;
  S[top] = x;
}

int pop()
{
  return S[top--];
}