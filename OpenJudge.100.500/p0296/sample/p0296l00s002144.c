#include<stdio.h>
int top=0;
int S[101];
void push(int x){
  top++;
  S[top]=x;
}
int pop(){
  top--;
  return S[top+1];
}
int main(){
  char a[100];
  int t,s;
    while(scanf("%s",&a)!=EOF){
      if(a[0]=='+') push(pop()+pop());
      else if(a[0]=='-'){
	t=pop();
	s=pop();
	push(s-t);
      }
      else if(a[0]=='*') push(pop()*pop());

	      else push(atoi(a));
    }     
  printf("%d\n",pop());
  return 0;
}