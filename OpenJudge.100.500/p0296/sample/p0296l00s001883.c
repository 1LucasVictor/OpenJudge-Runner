#include <stdio.h>
#include <stdlib.h>

void push(int);
int pop(void);

int top,S[1000];
int main(){
  int x,y;
  char a[100];

  while(scanf("%s",a)!=EOF){
    if(a[0]=='+'){
      x=pop();
      y=pop();
      push(y+x);
    }
    else if(a[0]=='-'){
      x=pop();
      y=pop();
      push(y-x);
    }
    else if(a[0]=='*'){
      x=pop();
      y=pop();
      push(y*x);
    }
    else push(atoi(a));


  }
  printf("%d\n",pop());
  return 0;
}

void push(int x){
  S[++top]=x;
}

int pop(){
  top--;
  return S[top+1];
}

