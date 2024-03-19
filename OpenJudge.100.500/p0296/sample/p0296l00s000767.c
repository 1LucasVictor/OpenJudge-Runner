#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int pop();
void p(int x);
int t, stack[1000];




int main(){
  int a,b;
  t = 0;

  char s[100];
  while(scanf("%s",s)!=EOF){
  if(s[0]=='+'){

    a=pop();
    b=pop();
    p(a+b);

  }

  else if(s[0]=='-'){
    b=pop();
    a=pop();
    p(a-b);
  }

  else if(s[0]=='*'){

    a=pop();
    b=pop();
    p(a*b);
  }
  else{
    p(atoi(s));
  }
}
printf("%d\n",pop());

return 0;
}


int pop(){
  t--;

  return stack[t+1];
}


void p(int x){
  stack[++t]=x;
}

