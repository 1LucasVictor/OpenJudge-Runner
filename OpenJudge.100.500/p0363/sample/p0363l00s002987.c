#include <stdio.h>
void swap(int *, int *);

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        swap(&a, &b);
    }
    if (a > c) {
        swap(&a, &c);
    }
    if (b > c) {
        swap(&b, &c);
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}