#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  int *INFO;
  int TOP;
}Stack;

#define top(s) (s).TOP
#define infotop(s) (s).INFO[top(s)]

void push(Stack *s,int x)
{
  top(*s)++;
  infotop(*s) = x;
}

void pop(Stack *s,int *x)
{
  if(!top(*s)){
    (*x) = 0;
    return;
  }
  (*x) = infotop(*s);
  top(*s)--;
}

void init(Stack *s,int sizes)
{
  top(*s) = 0;
  (*s).INFO = calloc(sizes,sizeof(int));
}

int main(){
  int x,y;
  char s[100];
  Stack st;
  init(&st,100);
  while(scanf("%s",s) != EOF ){
    if(s[0] == '\n'){
        while(top(st) > 1){
            pop(&st,&y);
            pop(&st,&x);
            if(s[0] == '+')
                push(&st,x+y);
            else if(s[0] == '-')
                push(&st,x-y);
            else if(s[0] == '*')
                push(&st,x*y);
            else
                push(&st,x/y);
        }
    }
    else if(s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/'){
        pop(&st,&y);
        pop(&st,&x);
        if(s[0] == '+')
            push(&st,x+y);
        else if(s[0] == '-')
            push(&st,x-y);
        else if(s[0] == '*')
            push(&st,x*y);
        else
            push(&st,x/y);
    }
    else
        push(&st,atoi(s));
  }
  while(top(st) > 0){
      pop(&st,&x);
      printf("%d\n",x);
  }
  return 0;
}

