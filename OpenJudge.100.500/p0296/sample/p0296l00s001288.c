#include <stdio.h>
#include <stdlib.h>

void initialize(void);
int push(int *, int);
int pop(int *);
int isEmpty(void);
int isFull(void);

int top = 0;

int main(){
  int y, z, S[100];// cnt=0,i;

  char *x;

  initialize();

  while(1){
    if(scanf("%s", x)==EOF)break;

    if(x[0] == '+'){
      y = pop(S);
      z = pop(S);
      push(S, y + z);
    }
    else if(x[0] == '-'){
      y = pop(S);
      z = pop(S);
      push(S, z - y);
    }
    else if(x[0] == '*'){
      y = pop(S);
      z = pop(S);
      push(S, y * z);
    }
    else{
      y = atoi(x);
      //printf("%d\n", y);
      push(S, y);
    }
    /*cnt++;
      printf("cnt:%d\n",cnt);*/
    //for(i = 0; i < 5; i++) printf("S:%d\n", S[i]);
  }

  printf("%d\n", pop(S));

  return 0;
}

void initialize(){
  top = 0;
}

int push(int *S, int x){
  if(isFull()){
    fprintf(stderr, "OverFlow\n");
    return 0;
  }
  top++;
  S[top] = x;
}

int pop(int *S){
  if(isEmpty()){
    fprintf(stderr, "UnderFlow\n");
    return 0;
  }
  top--;
  return S[top + 1];
}

int isFull(){
  if(top >= 99) return 1;
  else return 0;
}

int isEmpty(){
  if(top == 0) return 1;
  else return 0;
}