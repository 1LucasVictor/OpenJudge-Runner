#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int);
int pop (void);

int stack[100];
int top=0;

int main(){

  int a,b,c;
  char s[100];  

  while(scanf("%s",&s)!=EOF){
      if(s[0]=='+'){
	a=pop();
	b=pop();
	c=a+b;
	push(c);
      }
      if(s[0]=='-'){
	a=pop();
	b=pop();
	c=b-a;
	push(c);
      }
      if(s[0]=='*'){
	a=pop();
	b=pop();
	c=a*b;
	push(c);
      }
      else{
	c=atoi(s);
	push(c);
      }
  }

  printf("%d\n",stack[1]);

  return 0;
}

void push(int x){

  top=top+1;
  stack[top]=x;
  
}

int pop(void){
    top=top-1;
    return stack[top+1];
}