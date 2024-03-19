#include<stdio.h>
#include<string.h>

void push();

int head,X[1000];//Xがスタックの配列,headはスタックの位置をしめす。

int main(){
  char s[100];
  int a, b;
  while(scanf("%s",s)!=EOF){

    if(s[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(s[0]=='-'){
      b=pop();
      a=pop();
      push(a-b);
    }
    else if(s[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else{
      push(atoi(s));
    }
    
  }
  printf("%d\n",pop());
  return 0;
  
}

void push(int x){

  X[++head]=x;
  
}
int pop(){
  head--;
  return(X[head+1]);
}

