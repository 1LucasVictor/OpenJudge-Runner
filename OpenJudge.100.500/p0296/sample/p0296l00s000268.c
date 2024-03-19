#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void push(char);
int pop();

int S[MAX];
int top=0;
int main(){
  int i=0,vb,vd,vc,x,y,t,result;
  char a[MAX];

  while(result!=EOF){
    result=scanf("%s",a);
    
    if(a[0]=='+'||a[0]=='-'||a[0]=='*'){
      x= pop();
      y= pop();
      if(a[0]=='+'){
	
	push(x+y);
      }
      else if(a[0]=='-'){
	
	push(x-y);
      }
      else{
	
	push(x*y);
      }
    }
    else{
      vb=atoi(&a[0]);
      push(vb);
   
    }
  }
  printf("%d\n",pop());

  return 0;
}


void push(char x){
 
  top++;
  S[top]=x;
  
}
int pop(){
 
  top--;
  return S[top+1];
}