/* 3_A_Stack_Ans.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top, S[1000];

void push(int x) {
    /* topを可算してからその位置へ挿入 */
    S[++top] = x;
}

int pop() {
    /* topが指していた要素を返しtopの位置を一つ下げる */
    top--;
    return S[top+1];
}

int main() {
    int a, b;
    top = 0;
    char com[100];

    while(scanf("%s", com) != EOF) {
        if (com[0] == '+') {
            a = pop();
            b = pop();
            push(a+b);
        } else if (com[0] == '-') {
            b = pop();
            a = pop();
            push(a-b);
        } else if (com[0] == '*') {
            a = pop();
            b = pop();
            push(a*b);
        } else {
            push(atoi(com));
        }
    }

    printf("%d\n", pop());

    return 0;
}
