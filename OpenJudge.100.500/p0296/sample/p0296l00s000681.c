#include<stdio.h>
#include<stdlib.h>

#define MAX 100

void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);

int top;
int S[MAX];

int main(){
  int a,b;
  char arr[MAX];
  
  initialize();

  while(scanf("%s",arr)!=EOF){
    if(arr[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }else if(arr[0]=='-'){
      a=pop();
      b=pop();
      push(a-b);
    }else if(arr[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }else{
      push(atoi(arr));
    }
  }

  printf("%d\n",S[top]);
 

  return 0;
}

void initialize(){
  top=0;
}

/*int isEmpty(){
  if(top==0){
    return 0; //empty
  }else{
    return 1;
  }
}
int isFull(){
  if(top>=MAX){
    return 1; //full
  }else{
    return 0;
  }
}
*/
void push(int x){
  int full;

  /* full=isFull();

  if(full==1){
    fprintf(stderr,"overflow\n");
  }
  */
  top++;

  S[top]=x;
}

int pop(){
  int emp;

  /* emp=isEmpty();

 if(emp==0){
    fprintf(stderr,"underflow\n");
  }
  */
  top--;

  return S[top+1];
}