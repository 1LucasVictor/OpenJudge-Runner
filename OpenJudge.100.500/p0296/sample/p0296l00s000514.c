#include<stdio.h>
#include<stdlib.h>

#define MAX_OPERAND 100

int stack[MAX_OPERAND];
int size = 0;

int pop(){
  if(size <= 0) return 0;
  size--;
  return stack[size];
}

void push(int a){
  stack[size] = a;
  size++;
}

int isNumber(char c){
  if(c == '+' || c == '-' || c == '*' || c == '/') return 0;
  else if(c >= '0'|| c <= '9') return 1;
  else return 0;
}

int calc(char *c){
  int a,b,i = 0;
  while(*c){
    if(isNumber(*c)){
      a = *c - '0';
      push(a);
    }
    else{
      a = pop();
      b = pop();
      switch (*c){
      case '+':
	push(b+a);
	break;
      case '-':
	push(b+a);
	break;
      case '*':
	push(b*a);
	break;
      case '/':
	push(b/a);
	break;
      }

    }
    c += 2;
  }

  return pop();
}

int main(){
  int i=0;
  char c[MAX_OPERAND];
  scanf("%[^\n]*c",c);
  printf("%d\n",calc(c));
  
  return 0;
}

