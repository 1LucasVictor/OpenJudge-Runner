#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a,stack[100];
void push(int c);
int pop();
int main(){

  char A[100];
  int x,i,b,c;

  while(scanf("%s",A)!=EOF){
	if(A[0]=='+'){
	  c=pop();
	  b=pop();
	  push(b+c);
	  
	}
	else if(A[0]=='-'){
	  c=pop();
	  b=pop();
	  push(b-c);
	}
else if(A[0]=='*'){
	  c=pop();
	  b=pop();
	  push(b*c);
	}
 else{
   push(atoi(A));
 }
      }


  printf("%d\n",pop());
  return 0;
}

void push(int c)
{
  stack[++a]=c;
}
int pop()
{
  a--;
  return stack[a+1];
}

