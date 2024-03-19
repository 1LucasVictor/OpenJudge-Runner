#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top, S[1000];

/*int calculation(char){
  for(i=0; pol_f[i]!='0'; i++){
  if('1'<=pol_f[i] && pol_f[i]<='9') push(&sp, pol_f[i]);
  }
  return pop();
  }*/

void push(int num){
  S[++top] = num;
}

int pop(void){
  top--;
  return S[top+1];
}

int main(){
  int a, b;
  top = 0;
  char s[100];

  while(scanf("%s", s)!=EOF){
    if(s[0]=='+'){
      a = pop();
      b = pop();
      push(a+b);
    }
    else if(s[0]=='-'){
      a = pop();
      b = pop();
      push(b-a);
    }
    else if(s[0]=='*'){
      a = pop();
      b = pop();
      push(a*b);
    }
    else push(atoi(s));
  }
  
  printf("%d\n", pop());
  
  return 0;
}

