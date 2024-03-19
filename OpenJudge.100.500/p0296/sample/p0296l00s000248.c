#include <stdio.h>
#include <stdlib.h>
#define MAX 101
 
void initialize();
int Empty();
int Full();
void push(int);
int pop();
 
int n[MAX],top;
 
int main(){
  char m[MAX];
  int a,b;
 
  initialize();
 
  while(scanf("%s", m) != EOF){
    if(m[0] == '+'){
     b = pop();
     a = pop();
     push(a+b);
   }
   else if(m[0] == '-'){
    b = pop();
    a = pop();
    push(a-b);
  }
  else if(m[0] == '*'){
    b = pop();
    a = pop();
    push(a*b);
  }
  else {
    push(atoi(m));
  }
}
 
printf("%d\n", n[top]);
return 0;
}
 
void initialize(){
  top = 0;
}
 
int Empty(){
  return top == 0;
}
 
int Full(){
  return top >= MAX - 1;
}
 
void push(m){
  if(Full()){
    printf("WTF1\n");
    exit(1);
  }
  top++;
  n[top] = m;
}
 
int pop(){
  if (Empty()){
    printf("WTF2\n");
    exit(2);
  }
  top--;
  return n[top+1];
}