#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int top,s[1000];


void push(int x){
  s[++top]=x;
}

int pop(){
  top--;
  return s[top+1];
}


int main(){
  top=0;
  char S[100];
  int a,b,c;
  while(scanf("%s",S)!=EOF){



    if(S[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(S[0]=='-'){
      a=pop();
      b=pop();
      push(a-b);
    }
    else if(S[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else {
      push(atoi(S));
    }

  }

  printf("%d\n",pop());

  return 0;
}