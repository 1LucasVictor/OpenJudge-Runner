#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

#define SUB '-'
#define ADD '+'
#define MUL '*'

int top, S[MAX_SIZE];

void push(int);
int pop();

int main(void)
{
    top = 0;

    char str[100];

    while (scanf("%s", str) != EOF) {
        if (str[0] == '+')
            push(pop() + pop());
        else if (str[0] == '-')
            push(-pop() + pop());
        else if (str[0] == '*')
            push(pop() * pop());
        else
            push(atoi(str));
    }
    printf("%d\n", pop());

    return 0;
}

void push(int x)
{
    S[top++] = x;
}

int pop()
{
    return S[--top];
}
