#include <stdio.h>
#include <stdlib.h>

#define N (100)

int push(int stack[], int data, int *top, char n);
int pop(int stack[], int *top);

int
main(void)
{
        int num;
        char formula[256];
        int top = 0;
        int stack [N];
        int a, b;

        while (scanf("%s", formula) != EOF) {
                if (formula[0] == '+') {
                        a = pop(stack, &top);
                        b = pop(stack, &top);
                        push(stack, (a + b), &top, N);
                } else if (formula[0] == '-') {
                        a = pop(stack, &top);
                        b = pop(stack, &top);
                        push(stack, (b - a), &top, N);
                } else if (formula[0] == '*') {
                        a = pop(stack, &top);
                        b = pop(stack, &top);
                        push(stack, (a * b), &top, N);
                } else {
                        num = atoi(formula);
                        push(stack, num, &top, N);
                }
        }
                printf("%d\n", stack[0]);
                return 0;
}

int
push(int stack[], int data, int *top, char n)
{
        if (*top < n) {
                stack[(*top)++] = data;
                return *top;
        } else {
                return 0;
        }
}

int
pop(int stack[], int *top)
{
        if (*top > 0) {
                return stack[--(*top)];
        } else {
                return 0;
        }
}

