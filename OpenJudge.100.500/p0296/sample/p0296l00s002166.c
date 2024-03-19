#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
void initialize(void);
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
 int s[100];
int top;
int main(){
  int x,a1,a2;
  char s[100];
  initialize();

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      a1=pop();
      a2=pop();
      push(a1+a2);
    } 
    else if ( s[0] == '-' ){
	a1=pop();
	a2=pop();
	push(a2-a1);
    } 
    else if ( s[0] == '*' ){
	a1=pop();
	a2=pop();
	push(a1*a2);
    } 
    else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());

  return 0;
}

void push(int x){
  // if(isFull) fprintf(stderr,"error\n");
  top++;
  s[top]=x;
}

int pop(){
  // if( isEmpty()) fprintf(stderr,"error\n");
  top--;
  return s[top+1];
}

int isEmpty(){
  return top==0;
}

int isFull(){
  return top>= MAX-1;
}

void initialize(void){

  top=0;
}