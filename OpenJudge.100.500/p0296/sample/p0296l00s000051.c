#include<stdio.h>
int s[5];
int top=0;
void push(int x){
  top ++;
  s[top]=x;
}
int pop(){
  top--;
  return s[top+1];
}

int main(){
  char a[8];
  int c,b;
  while(scanf("%s",a)!=EOF){
    if(a[0]=='+')push(pop()+pop());
    else if(a[0]=='-'){
      c=pop();
      b=pop();
      push(b-c);}
    else if(a[0]=='*')push(pop()*pop());
    else push(atoi(a));
  }
  printf("%d\n",pop());
  return 0;
}