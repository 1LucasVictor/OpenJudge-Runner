#include <stdio.h>

void calc(char);
void push(int);
int pop(void);

int stack[1000];
int stackUsed[1000];

main(){

  int i, END_OF_INPUT;
  char str[9];

  // INITIALIZE
  for(i=0; i<100; i++){
    stack[i] = 0;
    stackUsed[i] = 0;
  }

  while(1){

    END_OF_INPUT=0; i=0;
    while(1){
      scanf("%c",&str[i]);
      if(str[i] == ' '){
	str[i]='\0';
	break;
      }
      if(str[i] == '\n'){
	str[i]='\n';
	END_OF_INPUT=1;
	break;
      }
      i++;
    }

    if('0' < str[0] && str[0] <= '9'){
      push(atoi(str));
    }else{
      calc(str[0]);
    }

    if(END_OF_INPUT) break;

  }

  printf("%d\n",pop());

  return 0;

}

void calc(char exp){

  int op1, op2, ans;

  op2 = pop();
  op1 = pop();

  switch(exp){
  case '+':
    ans = op1 + op2;
    break;
  case '-':
    ans = op1 - op2;
    break;
  case '*':
    ans = op1 * op2;
    break;
  default:
    break;
  }

  push(ans);

}

void push(int value){

  int i=0;
  while(stackUsed[i]==1){
    i++;
  }
  stack[i] = value;
  stackUsed[i] = 1;

}

int pop(){

  int i=0, tmp;
  while(stackUsed[i]==1){
    i++;
  }
  tmp = stack[i-1];
  stack[i-1] = 0;
  stackUsed[i-1] = 0;
  return tmp;

}