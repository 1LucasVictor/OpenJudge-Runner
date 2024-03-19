#include <stdio.h>
#include <stdlib.h>
#define N 100

void push(int);
int pop();

int top, calc[10000];

int main(){

  top=0;
  int x, y, result;
  char str[N];

  while( scanf("%s", str) != EOF){

    if(str[0]=='+'){

      x=pop();
      y=pop();

      push(x+y);
    }else if(str[0]=='-'){
      x=pop();
      y=pop();

      push(y-x);
    }else if(str[0]=='*'){
      x=pop();
      y=pop();

      push(x*y);
    }else push(atoi(str));
  }


  result=pop();
  printf("%d\n", result);
 return 0;
  
}

void push(int a){


  calc[++top]=a;

}
int pop(){

  top--;

  return calc[top+1];
}
  
  
    
    

  

