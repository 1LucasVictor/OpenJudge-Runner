#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(int);
int pop(void);
int sp=0, st[100];

int main(){
  char S[100];
  int a;

  while(scanf("%s ",S)!=EOF){
    switch(S[0]){
    case '+':
      push(pop()+pop());
      break;
    case '-':
      a=pop();
      push(pop()-a);
      break;
    case '*':
      push(pop()*pop());
      break;
    case '/':
      a=pop();
      push(pop()/a);
      break;
    default:
      push(atoi(S));
      break;
    }
  }
  printf("%d\n",pop());
  return 0;

}

void push(int w){
  st[sp++]=w;
}

int pop(void){
  return st[--sp];
}