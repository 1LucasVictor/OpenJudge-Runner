#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(int);
int pop();

int sum[1000];
int top;

int main(){
  int x;
  int top=0;
  int po1,po2;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      po1=pop();
      po2=pop();
      push(po1+po2);
    }
    else if ( s[0] == '-' ){
      po2=pop();
      po1=pop();
      push(po1-po2);
    }
    else if ( s[0] == '*' ){
      po1=pop();
      po2=pop();
      push(po1*po2);
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
  top++;
  sum[top]=x;
}

int pop(){
  top--;
  return sum[top+1];
}