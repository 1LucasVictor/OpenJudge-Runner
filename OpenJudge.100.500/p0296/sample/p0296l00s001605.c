#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void push(int);
int pop(void);

/*外部変数*/
int top,S[100];

int main()
{
 
  int top,x,y,z;
  char s[100];


  top=0;
  while(scanf("%s",s) != EOF){

    if(s[0] == '+'){
      x = pop();
      y = pop();
      push(x+y);
    }
    else if(s[0] == '-'){
      x = pop();
      y = pop();
      push(x-y);
    }
    else if(s[0] == '*'){
      x = pop();
      y = pop();
      push(x*y);
    }
    else{ 
      z = atoi(s);
      push(z);
    }
  }

  printf("%d\n",pop());
  return 0;
}

/*数字を入れる*/
void push(int x)
{
  top++;

  S[top] = x;
}
/*数字を取り出す*/
int pop()
{

  top--;

  return S[top+1];
}