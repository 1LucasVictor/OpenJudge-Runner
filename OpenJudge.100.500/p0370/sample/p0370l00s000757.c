#include <stdio.h>
int main(void){
    int a[20000], b[20000], dummy;
    char op;
    int i, x[20000], sum = 0;

    for(i = 0; i < 20000; i++){
        scanf("%d %c %d", &a[i], &op, &b[i]);
        if(op == '?') break;
        sum += 1;

        if(op == '+') x[i] = a[i] + b[i];
        else if(op == '-') x[i] = a[i] - b[i];
        else if(op == '*') x[i] = a[i] * b[i];
        else x[i] = a[i] / b[i];
    }

    for(i = 0; i < sum; i++){
        printf("%d\n", x[i]);
    }
    return 0;
}
