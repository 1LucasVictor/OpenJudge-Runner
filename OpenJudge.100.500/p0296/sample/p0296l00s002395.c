#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 200

int stack[MAX];
int pos;

void push(int ele);
int pop(void);


int main() {

    char s[MAX];
    int i, b;
    pos = -1;
    i = 0;
    while(scanf("%s", s) != EOF) {
        switch (s[0]) {
            case '+':
                push(pop() + pop());
                break;
            case '-':
                b = pop();
                push(pop() - b);
                break;
            case '*':
                push(pop() * pop());
                break;
            default:
                push(atoi(s));
                break;
        }
    }
    printf("%d\n", pop());
    
    
    return 0;
}

void push(int ele) {
    stack[++pos] = ele;
}

int pop(void) {
    return stack[pos--];
}
