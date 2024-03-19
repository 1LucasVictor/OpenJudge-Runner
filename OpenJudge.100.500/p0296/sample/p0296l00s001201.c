#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top,S[100];

void push(int a){
  S[++top] = a;
}

int pop(){
  int ans;
  top--;
  ans = S[top+1];
  return ans;
  
}

int main(){
  
  int s, t, u;
  top = 0;
  char array[1000000];
  
  while(1)
    {
      if( scanf("%s", &array[0]) == EOF ) break;
      
      if ( array[0] == '+' ){
	s = pop();
	t = pop();
	push(s + t);
      } 
      else if ( array[0] == '-' ){
	t = pop();
	s = pop();
	push(s - t);
      }
      else if ( array[0] == '*' ){
	s = pop();
	t = pop();
	push(s * t);
      }
      else {
	u = atoi(array);
	push(u);
      }
    }
  
  printf("%d\n", pop());
  
  return 0;
}