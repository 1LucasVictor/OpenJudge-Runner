//逆ポーランド記法
//2018-12-11
//Ebitani Akira

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top;
int array[10000];

int pop();
void push(int);


int main(){
  char s[100];
  int x,y;
  top = 0;

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      x = pop();
      y = pop();
      push( x+y );
    }
    else if ( s[0] == '-' ){
      x = pop();
      y = pop();
      push( y-x );
    }
    else if ( s[0] == '*' ){
      x = pop();
      y = pop();
      push( x*y );
    }
    else {
      push(atoi(s));

    }
  }

  printf("%d\n",pop());

  return 0;
}

void push(int x){
  
  array[++top] = x;
}

int pop(){
  top--;

  return array[top+1];
}
    






