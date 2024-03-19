#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int s[224] = {};

void push(int );
void empty();
int  pop();

int top = 0;

int main(){
  char ss[224];
  int x,y;
  while(scanf("%s",ss) != EOF){
    // printf("%s\n",ss);
    if(ss[0] == '+'){
      x = pop();
      y = pop();
      // printf("+x = %d,y = %d\n",x,y);
      push(x + y);
    }
    else if(ss[0] == '-'){
      x = pop();
      y = pop();
      // printf("-x = %d,y = %d\n",x,y);
      push(y - x);
    }
    else if(ss[0] == '*'){
      x = pop();
      y = pop();
      // printf("*x = %d,y = %d\n",x,y);
      push(x * y);
    }
    else{
      // printf("at = %d\n,top = %d\n",atoi(ss),top);
      push(atoi(ss));
    }
  }

  printf("%d\n",s[top]);  
  return 0;
}

void push(int x){
  top++;
  s[top] = x;
}

int pop(){
  top--;
  return s[top + 1];
}


  