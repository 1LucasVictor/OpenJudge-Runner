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

    do {
        scanf("%d", &x);
        if (x == 0) {
            printf("%d\n", pop());
        } else {
            push(x);
        }
    } while (c != 0);

    return 0;
}