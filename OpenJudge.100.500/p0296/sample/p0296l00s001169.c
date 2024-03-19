#include<stdio.h>
#include<stdlib.h>
#define N 100
#define E 99
void push(int);
int pop(void);
int isEmpty(void);
int isFull(void);


int top=0;
int s[N];

int main(){
  int n,n1,n2;
  char c;

  while(1){
    scanf("%c",&c);
    if(c==' ')continue;
    if(c=='\n')break;
    if(c>='0' && c<='9') push(atoi(&c));
    else{
      if(isEmpty()==-1)continue;
      n2=pop();
      if(isEmpty()==-1){
	push(n2);
	continue;
      }
      n1=pop();
      if(c=='+')push(n1+n2);
      if(c=='-')push(n1-n2);
      if(c=='*')push(n1*n2);
      if(c=='/')push(n1/n2);
    } 
  }
  
  printf("%d\n",pop());
  
  return 0;
}

void push(x){
  if(isFull()==-1)return;
  top++;
  s[top]=x;
  return;
}

int pop(){
  top--;
  return s[top+1];
}

int isEmpty(void){
  if(top==0)return -1;
  return 0;
}

int isFull(void){
  if(top>N) return -1;
  return 0;
}