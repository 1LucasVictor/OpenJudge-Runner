#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top,S[1000];

void push(int);
int pop();

int main() {
  int a;
  top=0;
  char s[100];

  while(scanf("%s",s)!=EOF){
    if(s[0]=='+'){
      push(pop()+pop());
  }
    else if(s[0]=='-'){
      a=pop();
      push(pop()-a);
    }
    else if(s[0]=='*'){
      push(pop()*pop());
    }
    else{
      push(atoi(s));
    }
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
