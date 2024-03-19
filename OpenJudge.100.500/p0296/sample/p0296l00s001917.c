#include<stdio.h>
#include<stdlib.h>

#define MAX 100
#define T 1
#define F -1
void push(int);
int pop(void);
int isEmpty(void);
int isFull(void);
void initialize(void);

int top=0;
int S[MAX];
int main(){
  int i=0,num,x;
  char a[10000];
  initialize();
  while(scanf("%s",a)!=EOF){
    if(a[0]=='*'){
      x = pop();
      x = x*pop();
      push(x);
    }
    else if(a[0]=='+'){
      x=pop();
      x=x+pop();
      push(x);
      break;
    }
    else if(a[0]=='-'){
      x=pop();
      x=pop()-x;
      push(x);
    }
    else {
      num = atoi(&a[0]);
      push(num);
    }
  }
  printf("%d\n",S[top]);
return 0;
}

void initialize(void){
  top = 0;
}

int isEmpty(void){
  if(top==0){
    return F;
  }
  else return T;
}

int isFull(void){
  if(top>=MAX-1) return F;
  else return T;
}

void push(int x){
  if(isFull()==F){
    fprintf(stderr,"overflow\n");
  }
  top++;
  S[top] = x;
}

int pop(void){
  if(isEmpty()==F){
    fprintf(stderr,"underflow\n");
  }
  top--;
  return S[top+1];
}

