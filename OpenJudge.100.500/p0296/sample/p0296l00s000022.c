#include <stdio.h>
#include <stdlib.h>

int top=0,S[1000];

void push(int);
int pop(void);

int main()
{
  int i,a,b;
  char s[100];
  

  while(scanf("%s",s)!=EOF)
    {
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
      }

      else {
	a=atoi(s);
	push(a);
      }
    }

  printf("%d\n",pop());

  return 0;
}

void push(int n){
  S[++top]=n;
}

int pop(void){
  top--;
  return S[top+1];
}
