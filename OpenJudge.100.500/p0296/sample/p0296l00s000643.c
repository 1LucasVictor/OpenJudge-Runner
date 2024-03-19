#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

int initialize();
int isEmpty();
int isFull();
void push(int);
int pop();

int top;
int S[100];

int main(){
  int x;
  char s[100];
  int a,b;
  while(scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      a = pop();
      b = pop();
      push(a + b);
      
    } else if ( s[0] == '-' ){
      a = pop();
      b = pop();
      push(b - a);

    } else if ( s[0] == '*' ){
      a = pop();
      b = pop();
      push(a * b);
      
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",S[top]);
  return 0;
}

int initialize(){
  top = 0;
}

int isEmpty(){
  if(top == 0) return 1;
  else return 0;
  
}

int isFull(){
  if(top >= MAX - 1) return 1;
  else return 0;

    }

void push(int x){
  if (isFull() == 1) printf("??¨?????????????????????????????????\n");
  else{
    top++;
    S[top] = x;
	     }
}
int pop(){
  if (isEmpty() == 1)printf("?????¢???????????¨?????????\n");
  else{
    top--;
    return S[top+1];
	      }
}