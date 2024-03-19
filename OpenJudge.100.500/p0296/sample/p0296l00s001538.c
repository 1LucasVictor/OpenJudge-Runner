#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int pop();
void push(int);


int main(){
  int x,y;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      x = pop();
      y = pop();
      push(x+y);

    } else if ( s[0] == '-' ){
      y = pop();
      x = pop();
      push(x-y);

    } else if ( s[0] == '*' ){
      x = pop();
      y = pop();
      push(x*y);

    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());

  return 0;
}


int stac[1000],top;

void push(int x){
  stac[++top] = x;
  
}

int pop(){
  top--;
  return stac[top+1];
}

