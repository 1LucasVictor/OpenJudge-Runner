#include <stdio.h>
int data[100];
int sp = 0;

int empty() {
    return sp <= 0;
}


int top() {
    return data[sp-1];
}

void pop() {
    sp--;
}

void push(int v) {
    data[sp] = v;
    sp++;
}

int main() {
    int a;
    while(scanf("%d", &a) != EOF) {
        if(a != 0) {
            push(a);
        } else {
            if(empty()) break;
            printf("%d\n", top());
            pop();
        }
    }
    return 0;
}