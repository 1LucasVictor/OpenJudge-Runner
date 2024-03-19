#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void push(int);
int pop(void);

int main()
{
int  x, y, n;
char ch[100];

while(scanf("%s", ch) != EOF) {
if(ch[0]=='+'){
x=pop();
y=pop();
push(x+y);
}
else if(ch[0]=='-'){
y=pop();
x=pop();
push(x-y);
}
else if(ch[0]=='*'){
x=pop();
y=pop();
push(x*y);
}

else{
n = atoi(ch);
push(n);
}
}

printf("%d\n", pop());

return 0;
}

int S[100];
int top;

void push(int x){
if(top>=100-1){
  printf("over flow\n");
}

++top;
S[top] = x;
}

int pop(void){
  if(top==0){
    printf("under flow\n");
  }
--top;
return S[top+1];
}