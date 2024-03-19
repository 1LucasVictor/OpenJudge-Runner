#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int S[100];
int top = 0;

void push(int x) {
    S[++top] = x;
}

int pop() {
    return S[top--];
}

int main() {
    int a, b;
    char s[10];

    while (scanf("%s", s) != EOF) {
        if (s[0] == '+') {
            a = pop();
            b = pop();
            push(a + b);

        } else if (s[0] == '-') {
            a = pop();
            b = pop();
            push(b - a);

        } else if (s[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);

        } else {
            push(atoi(s));
        }
    }

    printf("%d\n", pop());

    return 0;
}

