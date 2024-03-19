#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

void push(int);
int pop(void);
int change(char c);

int p = 0;
int stack[MAX + 1];

int main(){

  int data1, data2;
  char c;

  while(1){
      c = getchar();

   if(c == '\n'){
	  printf("%d",pop());
    printf("\n");
	  break;
	  }
   else if('0' <= c && c <= '9'){
	  push(change(c));
	  }
   else if(c == ' '){
      continue;
    }
   else{
	  data1 = pop();
    data2 = pop();

   if(c=='+') push(data1 + data2);
    else if(c=='-') push(data1 - data2);
    else if(c=='*') push(data1 * data2);
    else if(c=='/') push(data1 / data2);
    }
   }
 return 0;
}

void push(int x){
 stack[p++] = x;
}

int pop(){
  return stack[--p];
}

int change(char c){
  char str[2];
  str[0]=c;
  str[1]='\0';
  return atoi(str);
}

