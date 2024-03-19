#include <stdio.h>
 
int count=0;
int stack[100];
 
void push(int x){
  count++;
  stack[count]=x;
}

int pop(){
  count--;
  return stack[count+1];
}
 
int main(){
  int x;
  char s[100];
  int a,b;
  
  while(scanf("%s",s) != EOF ){
    if(s[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    } 
    else if(s[0]=='-'){
      a=pop();
      b=pop();
      push(b-a);
    } 
    else if(s[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",stack[count]);
  return 0;
}