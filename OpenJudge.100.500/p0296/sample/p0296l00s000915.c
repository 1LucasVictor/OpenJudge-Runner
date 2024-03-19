#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(int* , int);

int pop(int*);

int top=0;

int main(){
  
  int i,time=0,y,x,in;
  int num[200];
  char s[200];

  while(scanf("%s",s)!=EOF){

    if(s[0]=='+'){
      y=pop(num);
      x=pop(num);
      in=x+y;
      push(num,in);
    }
    else if(s[0]=='-'){
      y=pop(num);
      x=pop(num);
      in=x-y;
      push(num,in);
    }
    else if(s[0]=='*'){
      y=pop(num);
      x=pop(num);
      in=x*y;
      push(num,in);
    }
    else{
      in=atoi(s);
      push(num,in);

    }
  }
  printf("%d\n",num[1]);


    
  return 0;
}


void push(int* A, int x){

  top++;
  A[top]=x;
}


int pop(int* A){

    top=top-1;
    return A[top+1];
 
}