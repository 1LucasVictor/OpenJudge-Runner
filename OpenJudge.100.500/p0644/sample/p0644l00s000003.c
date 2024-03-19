#include <stdio.h>
int main(void){
    char a, b, c;
    int A, B, C;
    scanf("%c%c%c" , &a , &b, &c);
    A = a - '0';
    B = b - '0';
    C = c - '0';
    printf("%d\n", A + B + C);
    return 0;
}
