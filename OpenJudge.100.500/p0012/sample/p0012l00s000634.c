#include <stdio.h>

void push(int);
int pop(int);

int s[10];
int top = 0;

int main(){
  int  i, x;

  for(i = 0 ; i < 8 ; i++){
    scanf("%d",&x);
    if(x != 0)
      push(x);
    else { x = pop(x);
      printf("%d\n",x);
    }
  }
  return 0;
}
void push(int x){
  top++;
  s[top] = x;
}

int pop(int x){
  x = s[top];
  top--;
  return x;
}