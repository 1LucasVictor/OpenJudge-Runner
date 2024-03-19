#include<stdio.h>
#include<stdlib.h>
#define N 200
#define TRUE 1
#define FALSE 0


int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);

int top=0;
int stack[N];


int main(){
  int tmp,num,m,i=0;
  char cn[100];

  while(scanf("%s",cn)!=EOF){
    if(cn[0]=='+'){
      push(pop()+pop());
      
    }else if(cn[0]=='-'){
      tmp = pop();
      push(pop()-tmp);
      
    }else if(cn[0]=='*'){
      push(pop()*pop());
      
      
    }else{
      num = atoi(cn);
      push(num);
    }
  }

  printf("%d\n",pop());
  return 0;
}



void push(int num){
  top++;
  stack[top]=num;
}


int pop(){
  top--;
  return stack[top+1];
}
  

