#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int pop();
void push(int);
char S[100];
int top;
int main(){
  int a,b,top=0;
  char s[100];
  while( scanf("%s",s) !=EOF ){
    if(s[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
      //break;
    }else if(s[0]=='-'){
      a=pop();
      b=pop();
      push(a-b);
      //break;
    }else if(s[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
      //break;
    }else{
     
      push(atoi(s));
     //printf("%d\n",x);
     // break;
    }
  }
  printf("%d\n",pop());
  return 0;
}


int pop(){
  top--;
  return S[top+1];
	   }
void push(int x){
  S[++top]=x;
  // printf("%d\n",value[top-1]);
}


