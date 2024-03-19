#include <stdio.h>
#include <stdlib.h>
int count[199];
int number=0;

void push(int x);
int pop();
  int main(){
  char s[199];
  int y;
  while(scanf("%s",s)!=EOF){
      switch(s[0]){
      case '+':
        push(pop()+pop());
        break;
      case '*':
        push(pop()*pop());
        break;
      case '-':
          y=pop();
        push(pop()-y);
        break;
      default:
        push(atoi(s));
        break;
      }
    }
    printf("%d\n",pop());
    return 0;
}
void push(int x){
  number++;
  count[number]=x;
}
int pop(){
  number--;
  return count[number+1];
}

