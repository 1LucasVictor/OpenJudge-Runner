#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
void push(int);
int pop();

int top,S[1000];
int main(){
  int x,y;
  char s[100];
  top=0;
  while(scanf("%s",s)!= EOF){
    if(s[0]== '+'){
      x=pop();
      y=pop();
      push(x+y);
    }
    else if(s[0]=='-'){
      x=pop();
      y=pop();
      push(y-x);
      
    }
    else if(s[0]=='*'){
      x=pop();
      y=pop();
      push(x*y);
    }
    else{
      push(atoi(s));
    }

  }
  printf("%d\n",pop());
}
void push(int i){
  S[++top]=i;
}
int pop(){
  top--;
  return S[top+1];
}
  

