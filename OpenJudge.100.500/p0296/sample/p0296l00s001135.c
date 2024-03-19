#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
#define MAX 100 

int top,S[MAX];
char s[MAX];

void initialize(void){
  top=0;
}
 
int isEmpty(void){
  if(top==0)
    return TRUE;
  else
    return FALSE;
}
int isFull(void){
  if(top>=MAX-1)
    return TRUE;
  else
    return FALSE;
}
void push(int a){
  if(isFull()){
    fprintf(stderr,"Overflow!!\n");
    exit(8);
  }
  else{
    top++;
    S[top]=a;
  }
}
int pop(void){
  if(isEmpty()){
    fprintf(stderr,"Underflow!!\n");
    exit(8);
  }
  else
    top--;
  
  return S[top+1];
}

int main(){
  int x=0,a,b;
  
  while( scanf("%s",s) != EOF ){
    if ( s[0] == '+' ){
      b=pop();
      a=pop();
      x=a+b;
      push(x);
      
    } else if ( s[0] == '-' ){
      b=pop();
      a=pop();
      x=a-b;
      push(x);
      
    } else if ( s[0] == '*' ){ 
      b=pop();
      a=pop();
      x=a*b;
      push(x);
	
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());
  
  return 0;
}