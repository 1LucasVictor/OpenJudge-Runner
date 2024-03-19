#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a, b;
    char op;
    
    //処理
    while (1) {
        scanf("%d %c %d", &a, &op, &b);
        switch (op) {
            case '+':
                printf("%d\n", a+b);
                break;
            case '-':
                printf("%d\n", a-b);
                break;
            case '*':
                printf("%d\n", a*b);
                break;
            case '/':
                printf("%d\n", a/b);
                break;
            case '?':
                return 0;
            default:
                break;
        }
    }
    
    return 0;
}
