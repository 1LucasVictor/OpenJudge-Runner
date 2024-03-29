#include <stdio.h>
#include <stdlib.h>

#define MAX 100

//prototype
void push(int);
int pop();
void isEmpty();
void isFull();

//global variables
int S[MAX + 1]; //opeland
int top=1;

void push(int x){
  //overflow
  isFull(); //full??????exit()

  S[top] = x;

//  printf("push: %d\n",x);

  top++;
}

int pop(){
  int x;
  
  //underflow
  isEmpty(); //empty??????exit()

  top--; //?????????top?????????????????¨

  x = S[top];
//  printf("pop: %d\n",x); //@@

  return x;
}

void isEmpty(){
  if(top==0){
    printf("Error: Underflow\n");
    exit(1);
  }
}

void isFull(){
  if(top>=MAX-1){
    printf("Error: Overflow\n");
    exit(1);
  }
}


//MAIN
int main(){
  int n, x_int;
  char x[1000000];

  //sentinel
  S[0] = 0;

  //???????????\???(push) & ???????????????????¨????
  while(scanf("%s", x)!=EOF){
    if(x[0]>47){ //??°?????????(????????????????????§???47????????§???????????°??°?????¨????????§??????)
      x_int = atoi(x); //???????????????int????????????
      push(x_int);
    }else if(x[0]=='+'){ //?¶???????
      push(pop() + pop());
    }else if(x[0]=='-'){ //?????????
      int p1 = pop();
      int p2 = pop();
      push(p2 - p1);
    }else if(x[0]=='*'){ //?????????
      push(pop() * pop());
    }else{
      printf("???????????????????????????????????\??????????????????.\n");
      exit(1);
    }
  }
  
  printf("%d\n", pop());

  return 0;
}