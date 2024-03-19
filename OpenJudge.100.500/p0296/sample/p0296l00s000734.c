/* Stack */

#include <stdio.h>
#include <stdlib.h>

/* Inplement stack by array */
int S[3];
int top = 0;

void push(int v)
{
    top++;
    S[top] = v;
}

int pop(void)
{
    top--;
    return S[top + 1];
}

int main(void)
{
    char s[100];

    while (scanf("%s", s) != EOF) {
        int a, b;
        if (s[0] == '+') {
            a = pop();
            b = pop();
            push(a + b);
        }
        else if (s[0] == '-') {
            a = pop();
            b = pop();
            push(b - a);
        }
        else if (s[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);
        }
        else
            push(atoi(s));
    }

    printf("%d\n", pop());

    return 0;
}