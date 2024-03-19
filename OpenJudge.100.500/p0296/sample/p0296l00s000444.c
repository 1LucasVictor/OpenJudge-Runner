#include <stdio.h> 
#include <stdlib.h> //atoiを使うため。

int main() {
 
  int  top = 0;
  int x,y,z;
  char s[100];
  int stack[1000];

  while(scanf("%s",s) != EOF) {
    if('\n' == s[0]) printf("%d\n",stack[top]);

    else  if(s[0] == '+') {
	x = stack[top];
	top--;
	if(top == 0) {
	  printf("アンダーフロ-\n");
	  continue;
	}
	y = stack[top];
	stack[top] = y + x;
      }

      else if(s[0] == '-') {
	x = stack[top];
	top--;
	if(top == 0) {
	  printf("アンダーフロ-\n");
	  continue;
	}
	y = stack[top];
	stack[top] = y - x;
      }

      else if(s[0] == '*') {
	x = stack[top];
	top--;
	if(top == 0) {
	  printf("アンダーフロ-\n");
	  continue;
	}
	y = stack[top];
	stack[top] = y * x;
      }

      else {
	stack[++top] = atoi(s);
       } 
  }
 printf("%d\n",stack[top]);
  return 0;
}