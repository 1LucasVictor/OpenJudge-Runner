#include <stdio.h>

int greatest_value(int A, int B) {
    int greatest = A + B, op = A - B;
    
    if(op > greatest) {
        greatest = op;
    }

    op = A * B;

    if(op > greatest) {
        greatest = op;
    }

    return greatest;

}


int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    printf("%d\n", greatest_value(A, B));

    return 0;
}