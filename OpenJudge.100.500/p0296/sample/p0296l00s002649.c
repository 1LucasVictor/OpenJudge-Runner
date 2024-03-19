#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[100];
int s_pointer = 0;
int push(int);
int pop(void);

int main(void){
  int x;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      x = pop() + pop();
      push(x);
    } else if ( s[0] == '-' ){
      x = pop() - pop();
      x = x - x * 2;
     push(x);
    } else if ( s[0] == '*' ){
      x = pop() * pop();
      push(x);
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",stack[s_pointer]);
  return 0;
}

int push(int x){
  s_pointer++;
  stack[s_pointer] = x;
}

int pop(void){
  s_pointer--;
  return stack[s_pointer+1];
}