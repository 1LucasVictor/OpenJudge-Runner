#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

void push(int);
int pop(void);
void isEmpty(void);
void isFull(void);

int top=0,S[1000];

/*void isEmpty(){
  return top=0;
  }*/

/*void isFull(){
  return top >= MAX-1;
  }*/
void push(int x){
  top++;
  S[top]= x;
}

int pop(){
  top--;
  return S[top+1];
}

int main(){
  int a,b,i;
  char  s[100];
  while(scanf("%s",s) != EOF){
  
    if(s[0] == '+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(s[0] == '-'){
      b=pop();
      a=pop();
      push(a-b);
    }
    else if(s[0] == '*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else{
      push(atoi(s));
    }
  }
  i = pop();
  printf("%d\n",i);

  return 0;
}