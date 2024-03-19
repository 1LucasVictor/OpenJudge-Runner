#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push(int);
int pop();
int top;
int n[100];
int main(){
  int p,x,top=0;
  char a,b,s[100];
  while( scanf("%s", s) != EOF ){
    if(atoi(s)!=0){
     x = atoi(s);
      push(x);
    }
      else if ( s[0] == '+' ){
      a=pop();
      b=pop();    
      push(a+b);
    } else if ( s[0] == '-' ){
      a=pop();
      b=pop();    
      push(a-b);
    } else if ( s[0] == '*' ){
      a=pop();
      b=pop();    
      push(a*b);
    }
      else push(atoi(s));
  }
  printf("%d\n",pop());
  return 0;
}

void push(int x){  	     
  n[++top]=x;
}
int pop(){
  top--;
  return n[top+1];
}