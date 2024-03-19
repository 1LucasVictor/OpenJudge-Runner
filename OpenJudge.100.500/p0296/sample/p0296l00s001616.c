#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int t=0,num[100];

void push(int);
int pop(void);

int main(){
  int a,b;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      a=pop();
      b=pop();
      push(a+b);

    } 

    else if ( s[0] == '-' ){
      a=pop();
      b=pop();
      push(b-a);
    } 

    else if ( s[0] == '*' ){
      a=pop();
      b=pop();
      push(a*b);
    } 

    
    else {
      push(atoi(s));

    }
  }
    printf("%d\n",num[0]);

  return 0;
}

void push(int x){
  num[t]=x;
  t++;
}

int pop(){
  int x;
  t--;
  x=num[t];

  return x;
}