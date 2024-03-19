#include <stdio.h>
#define PI 3.141592653589
int main(void){
    int a, b;
    char op;
    
    while(scanf("%d %c %d\n", &a, &op, &b) != EOF) {
        if (op == '?') break;
        if (b == 0 && op == '/') break;
        if (op == '+') printf("%d\n", a + b);
        if (op == '-') printf("%d\n", a - b);
        if (op == '*') printf("%d\n", a * b);
        if (op == '/') printf("%d\n", a / b);
    }
    
    return 0;
}
