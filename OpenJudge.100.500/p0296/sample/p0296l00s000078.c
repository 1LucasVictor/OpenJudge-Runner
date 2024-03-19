#include<stdio.h>
#include<stdlib.h>

void push(int);
int pop(void);

int si[100],top=0;

int main(){
  int x,y;
  char s[100];

  while( scanf("%s",s) != EOF ){
    if ( s[0] == '+' ){

      push(pop()+pop());

    }

    else if ( s[0] == '-' ){
      x=pop();
      y=pop();

      push(y-x);
      
    }
    
    else if ( s[0] == '*' ){

      push(pop()*pop());
      
    }

    else {
      x=atoi(s);
      push(x);
    }
  }

  printf("%d\n",pop());

  return 0;
}

void push(int x){
  top++;
  si[top] = x;
}

int pop(void){
  top--;
  return si[top+1];
}

