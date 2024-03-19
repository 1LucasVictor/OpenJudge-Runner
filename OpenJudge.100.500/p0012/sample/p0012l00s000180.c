#include <stdio.h>

int s[10];
int c = 0;

void push(int x)
{
    s[c++] = x;
}

int pop(void)
{
    return s[--c];
}

int main(void)
{
    int x;

    while (scanf("%d", &x) != EOF) {
        if (x == 0) {
            printf("%d\n", pop());
        } else {
            push(x);
        }
    }

    return 0;
}