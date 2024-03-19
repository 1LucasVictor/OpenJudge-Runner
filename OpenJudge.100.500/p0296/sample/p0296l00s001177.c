#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void initialize();
int pop();
void push(int);
int top;
int stack[10000];

int main()
{
    char array[100];
    int x,y;

    initialize();

    while(scanf("%s",array)!=EOF){
        if(array[0]=='+')
        {
            x=pop();
            y=pop();
            push(x+y);
        }
        else if(array[0]=='-')
        {
            y=pop();
            x=pop();
            push(x-y);
        }
        else if(array[0]=='*')
        {
            x=pop();
            y=pop();
            push(x*y);
        }
        else 
        {
            push(atoi(array));
        }
    }
    printf("%d\n",pop());
    return 0;
}

void initialize()
{
    top=0;
}

void push(x)
{
    stack[++top] = x;
}

int pop()
{
    top--;
   return stack[top+1];
}

