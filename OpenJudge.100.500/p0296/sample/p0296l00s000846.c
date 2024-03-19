#include <stdio.h>
#include <stdlib.h>

int top = 0, s[1000];

void push(int); 
int pop(void);


int main(void) {
    int a, b;
    char s[128];

    while(scanf("%s", s) != EOF) {
        if(s[0] == '+') {
            a = pop();
            b = pop();
            push(a + b);
        }
        else if(s[0] == '-') {
            b = pop();
            a = pop();
            push(a - b);
        }
        else if(s[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);
        }
        else {
            push(atoi(s));
        }
    }
    printf("%d\n", pop());

    return 0;
}

void push(int x) {
    s[++top] = x;
}

int pop(void) {
    top--;
    return s[top+1];
}

