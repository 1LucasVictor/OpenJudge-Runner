#include <stdio.h>

int main(void){
    int a, b, answer;
    char op;
    while (1){
        scanf("%d %c %d", &a, &op, &b);
        switch (op){
        case '+':
            answer = a + b;
            break;
        case '-':
            answer = a - b;
            break;
        case '*':
            answer = a*b;
            break;
        case '/':
            answer = a / b;
            break;
        }
        if (op == '?')break;
        printf("%d\n", answer);
    }
    return 0;
}