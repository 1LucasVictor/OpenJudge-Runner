#include<stdio.h>
int x,S[1000],top;

void push(int x)
{
  S[++top]=x;
}

int pop()
{
  int x=S[top--];
  return x;
}

int main(){
  int i;
  
  while(scanf("%d",&x)!=EOF)
    {
      if(x==0)
	{
	  printf("%d\n",S[top]); 
	  pop();
	}
      else
	{     
	  push(x);
	} 
    }
  
  return 0;
}