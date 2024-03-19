#include<stdio.h>

int stack[100], top=0;

void push(int);
int pop(void);

int main(){
  int i, num;
  char data;
  
  while(scanf("%c",&data)!=EOF && data!='\n'){

    //+
    if(data=='+'){
      num=pop()+pop();
      push(num);
    }

    
    //-
    else if(data=='-'){
      num=pop()-pop();
      num*=-1;
      push(num);
    }

    
    //*
    else if(data=='*'){
      num=pop()*pop();
      push(num);
    }

    //numbers
    else if(data>='0' && data<='9'){
      num=data-'0';
      while(scanf("%c",&data)!=EOF && data!=' '){
	num*=10;
	num+=data-'0';
      }
      push(num);
    }


  }
  
  printf("%d\n",pop());
  return 0;
}


void push(int data){
  stack[top]=data;
  top++;
}

int pop(void){
  return stack[--top];
}

