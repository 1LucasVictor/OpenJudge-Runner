#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=0,S[100];


void push(int);
int pop(void);
int isempty(void);
int isfull(void);


int main(){

  int a,b,x;
  char s[100];

  while(scanf("%s",s)!=EOF){


    if(s[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(s[0]=='-'){
      a=pop();
      b=pop();
      push(b-a);
    }
    else if(s[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else{
      x=atoi(s);
      push(x);
    }
  }
  printf("%d\n",S[top]);
  return 0;
}










void push(int x){
  if(isfull()==1)
    S[++top]=x;
}






int pop(){
  if(isempty()==1)
    {
    top--;
  
  return S[top+1];
    }
}






int isempty(){
  if(top==0)return 0;
  else return 1;
}



int isfull(){
  if(top>100-1)return 0;
  return 1;
}