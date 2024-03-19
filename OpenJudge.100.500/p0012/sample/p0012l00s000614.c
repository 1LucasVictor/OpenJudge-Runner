#include <stdio.h>

int data[10];
int sp = 0;
int read;

int top()
{
 return data[sp-1];
}

void pop()
{
 sp--;
}

void push(int v)
{
 data[sp] = v;
 sp++;
}

int main()
{
 while(scanf("%d",&read) != EOF)
 {
  if(read == 0)
  {
   printf("%d\n",top());
   pop();
  }
  else
  {
   push(read);
  }
 }
 return 0;
}