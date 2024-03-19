#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void push(int);
int pop();

int Q[1000];
int top;

int main(int argc, char const *argv[]) {
  /* code */
  int s1,s2;
  //???????????´???
  top=0;
  char s[1000];
  while(1){
    if(scanf("%s",s)==EOF) break;//???????????¶
    if(s[0]=='+'){
      s1=pop();
      s2=pop();
      push(s1+s2);
    }else if(s[0]=='-'){
      s1=pop();
      s2=pop();
      push(s1-s2);
    }else if(s[0]=='*'){
      s1=pop();
      s2=pop();
      push(s1*s2);
    }else{
      push(atoi(s));
    }
  }
  printf("%d\n",pop());
  return 0;
}

void push(int x){
  top++;
  Q[top]=x;
}

int pop(){
  top--;
  return Q[top+1];
}