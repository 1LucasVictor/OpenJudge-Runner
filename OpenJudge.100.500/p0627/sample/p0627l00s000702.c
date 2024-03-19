#include <stdio.h>

int main(){
    int A, B;
    int add, sub, mul;

    scanf("%d %d", &A, &B);

    add = A + B;
    sub = A - B;
    mul = A * B;

    if(add >= sub && add >= mul){
        printf("%d\n", add);
    } else if (sub >= mul){
        printf("%d\n", sub);
    } else {
        printf("%d\n", mul);
    }

    return 0;
}