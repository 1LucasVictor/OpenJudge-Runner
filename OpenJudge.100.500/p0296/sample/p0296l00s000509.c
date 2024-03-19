#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top, data[1000];

void push(int x);
int pop();

int main(void)
{
    int a, b;
    top = 0;
    char moji[100];

    while (scanf("%s", moji) != EOF) {
        if (moji[0] == '+') {
            b = pop();
            a = pop();
            push(a + b);
        } else if (moji[0] == '-') {
            b = pop();
            a = pop();
            push(a - b);
        } else if (moji[0] == '*') {
            b = pop();
            a = pop();
            push(a * b);
        } else {
            push(atoi(moji));
        }
    }

    printf("%d\n", pop());

    return 0;
}

void push(int x)
{
    data[++top] = x;
}

int pop()
{
    top--;
    return data[top + 1];
}

