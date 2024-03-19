#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int);
int pop(void);

int top,S[1000];

int main(){
  int x,y;
  top=0;
  char s[100];
  while(scanf("%s",s)!=EOF){
    if(s[0]=='+'){
      x=pop();
      y=pop();
      push(x+y);
    }
    else if(s[0]=='-'){
      y=pop();
      x=pop();
      push(x-y);
    }
    else if(s[0]=='*'){
      x=pop();
      y=pop();
      push(x*y);
    }
    else {
      push(atoi(s));
    }
  }
  printf("%d",pop());
  printf("\n");
  return 0;
}

void push(int a){
  S[++top]=a;
}

int pop(void){
  top--;
  return S[top+1];
}
