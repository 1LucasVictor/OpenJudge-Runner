#include <stdio.h>
#include <stdlib.h>
void push(int a);
int pop();
int top = 0;
int x[100];

int main(){
  char S[100];
  int a,b;

  while(scanf("%s",S) != EOF){
    if ( S[0] == '+' ){
      push((pop()) + (pop()));
    }
    else if ( S[0] == '-' ){
      a = pop();
      b = pop();
      push(b - a);
    }
    else if ( S[0] == '*' ){
      push((pop()) * (pop()));
    }
    else {
      push(atoi(S));
      
    }
  }
  printf("%d\n",x[1]);
  
  return 0;
  
}
void push(int a){
  top++;
  x[top] = a;
}

int pop(){
  top--;
  return x[top+1];
}


