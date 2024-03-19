#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top,S[10000];
void push(int x){
  S[++top]=x;
}
int pop(){
  top--;
  return S[top+1];
}
int main(){
  int x,i,j;
  char s[100];
  top=0;
  while( scanf("%s",s) != EOF ){
    if ( s[0] == '+' ){
      i=pop();
      j=pop();
      push(i+j);
    } else if ( s[0] == '-' ){
      i=pop();
      j=pop();
      push(j-i);
    } else if ( s[0] == '*' ){
      i=pop();
      j=pop();
      push(i*j);
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());
  return 0;
}

