#include <stdio.h>
#define STACK_SIZE 101
#define MAX_LEN 101
int stack[STACK_SIZE];
int stack_size=0;
int pop(){
  if(stack_size<=0) return 0;
  return stack[--stack_size];
}
void push(int a){
  stack[stack_size++]=a;
}
int judge(char*s){
  if(*s=='+'||*s=='-'){
    s++;
    if(*s>='0'&&*s<='9') return 1;
    return 0;
  }
  if(*s>='0'&&*s<='9') return 1;
  return 0;
}
int get_num(char*s){
  int flag=0,n=0;
  if(*s=='+'){
    s++;
  }
  else if(*s=='-'){
    flag=1;
    s++;
  }
  while(*s>='0'&&*s<='9'){
    n=n*10+(*s-'0');
    s++;
  }
  if(flag) return -n;
  return n;
}
int calculate(char*s){
  int x,y,n;
  while(*s){
    if(judge(s)){
      n=get_num(s);
      push(n);
      while(*s=='-'||*s=='+'){
	s++;
      }
      while(n){
	n/=10;
	s++;
      }
    }
    else{
      switch(*s){
      case '+':
	x=pop();
	y=pop();
	push(y+x);
	break;
      case '-':
	x=pop();
	y=pop();
	push(y-x);
	break;
      case '*':
	x=pop();
	y=pop();
	push(y*x);
	break;
      }
      s++;
    }
  }
  return pop();
}
int main(){
  int i;
  char s[MAX_LEN];
  scanf("%[^\n]*s",s);
  printf("%d\n",calculate(s));
  return 0;
}