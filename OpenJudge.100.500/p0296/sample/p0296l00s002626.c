#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int,int*);
int pop(int*);

int top=0;

int main(){
  char s;
  int i,a,b,c,sum=0,n[MAX],count=0,keta=1,suuji[6];
  
  initialize();
  while(1){
    scanf("%c",&s);
    if(s == '\n') break;
    if(s == '+'){
      a = pop(n);
      b = pop(n);
      c = a + b;
      push(c,n);
    }
    else if(s == '-'){
      a = pop(n);
      b = pop(n);
      c = a - b;
      push(c,n);
    }
    else if(s == '*'){
      a = pop(n);
      b = pop(n);
      c = a * b;
      push(c,n);
    }
    else{
      if(s == ' '){
	for(i = 0; i < count; i++){
	  keta = keta * 10;
	}
	for(i = 0; i < count; i++){
	  keta = keta / 10;
	  sum += suuji[i] * keta;
	}	
	push(sum,n);
	count = 0;
	keta = 1;
	sum = 0;
      }
      else{
	  
	suuji[count] = atoi(&s);
	count++;

      }
    }
  }
  printf("%d\n",n[top]);
  
  return 0;  
}

void initialize(){
  top = 0;
}

int isEmpty(){
  return top == 0;
}

int isFull(){
  return top >= MAX - 1;
}

void push(int x,int *n){
  if( isFull() ){
    printf("error (overflow)\n");
  }
  top++;
  n[top] = x;
}
      
int pop(int *n){
  if( isEmpty() ){
    printf("error(underflow)\n");
  }
  top--;
  return n[top+1];
}