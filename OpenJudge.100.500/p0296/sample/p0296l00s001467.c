#include<stdio.h>
#define MAX 400

int S[MAX];
int top=1;

void push(int);
int pop();

int main()
{
  int i,j;
  int x,y;
  char input[MAX];

  for(i=1;i<MAX;i++){
  scanf("%c",&input[i]);
  if(input[i] == 10) break;
  }

  //printf("%s",input+1);

  for(j=1;j<i;j++){
    //数字の時
    if(input[j] >= 48 && input[j] <= 57){
      //int型に変換
      x = input[j]-48;
      while(input[j+1] >= 48 && input[j+1] <= 57){
	x = x*10;
	x += input[j+1]-48;
	j++;
      }
      push(x);
    }
    // + の時
    else if(input[j] == 43){
      y = pop();
      x = pop();
      push(x+y);
    }
    // - の時
    else if(input[j] == 45){
      y = pop();
      x = pop();
      push(x-y);
    }
    // * の時
    else if(input[j] == 42){
      y = pop();
      x = pop();
      push(x*y);
    }
  }
  
  printf("%d\n",S[1]);
  
  return 0;
}

void push(int x)
{
  S[top] = x;
  // printf("push : %d\n",S[top]);
  top++;
}

int pop()
{
  int x;
  top--;
  x = S[top];
  // printf("pop : %d\n",S[top]);
  S[top] = 0;

  return x;
  }

