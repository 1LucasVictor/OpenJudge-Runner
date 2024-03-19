#include <stdio.h>
#include <stdlib.h>
int stack[10000];
int sp=0;
void push(int x){
  stack[sp++]=x;
}
int pop(){
  return stack[--sp];
}
int main(){
  char s[15];
  int i,j;
  int x;
  while(scanf("%s",s)!=EOF){
    if(s[0]=='+'){
      push(pop()+pop());
    }
    else if(s[0]=='-'){
      x=pop();
      push(pop()-x);
    }
    else if(s[0]=='*'){
      push(pop()*pop());
    }
    else if(s[0]=='/'){
      x=pop();
      push(pop()/x);
    }
    else{
      push(atoi(s));
    }
  }
  printf("%d\n",pop());
  return 0;
}