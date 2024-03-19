#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(int);
int Pop(void);

  int count=0;
  int stack[100];

int main(void){

  int x;
  int a,b;
  int i;
  char s[100];

  while( scanf("%s", s) != EOF ){
    
    for(i=0;s[i]!='\0';i++){
 
      if ( s[i] == '+' ){
	a = Pop();
	b = Pop();
	push(b + a);
      } 

      else if ( s[i] == '-' ){
	a = Pop();
	b = Pop();
	push(b - a);
      } 

      else if ( s[i] == '*' ){
	a = Pop();
	b = Pop();
	push(b * a);
      } 

      else {
	x = atoi(s);
	push(x);
      }
    }
  }
  
  printf("%d\n",stack[0]);

  return 0;
}


void push(int x){

  stack[count++] = x;

}

int Pop(void){

  return stack[--count];
}