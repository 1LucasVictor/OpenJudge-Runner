#include<stdio.h>
void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;    
}
int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a > b) swap(&a, &b);
    if(b > c) swap(&b, &c);
    if(a > b) swap(&a, &b);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
