#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
void push(int);
int pop();
 
int S_num[1000],top;
 
int main(){
  int num_a,num_b;
  char str_num[100];
 
  top=0;
 
  while(scanf("%s",str_num)!=EOF){
    if(str_num[0]=='+'){
      num_a=pop();
      num_b=pop();
      push(num_a+num_b);
    }else if(str_num[0]=='-'){
      num_b=pop();
      num_a=pop();
      push(num_a-num_b);
    }else if(str_num[0]=='*'){
      num_a=pop();
      num_b=pop();
      push(num_a*num_b);
    }else{
      push(atoi(str_num));
    }
  }
  
  printf("%d\n",pop());
 
  return 0;
}
 
void push(int x){
  top++;
  S_num[top]=x;
}
 
int pop(){
  top--;
  return S_num[top+1];
}
