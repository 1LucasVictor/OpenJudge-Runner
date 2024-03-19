#include<stdio.h>
#include <stdlib.h>
#define L 200
void push(int);
int pop();
int S[L],top=0;
int main(){
  char S[L];
  while(scanf("%s",S)!=EOF){
    if(S[0] == '+'){
      push(pop()+pop());
    }
    else if(S[0] == '-'){
      push(pop()-pop());
    }
    else if(S[0] == '*'){
      push(pop()*pop());
    }
    else push(atoi(S));
  }
  printf("%d\n",pop());
  return 0;
}
void push(int x){
  top++;
  S[top]=x;
}
int pop(){
  top--;
  return S[top+1];
}
