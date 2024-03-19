#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top, S[1000];

void push(int x) {
    top++;
    S[top] = x;
}

int pop() {
    top--;
    return S[top + 1];
}

int main() {
    int a, b;
    top = 0;
    char T[100];

    while(scanf("%s", &T) != EOF) {
        if(T[0] == '+') {
            a = pop();
            b = pop();
            push(a + b);
        } else if(T[0] == '-') {
            b = pop();
            a = pop();
            push(a - b);
        } else if(T[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);
        } else {
            push(atoi(T));
        }
    }

    printf("%d\n", pop());

    return 0;     
}
