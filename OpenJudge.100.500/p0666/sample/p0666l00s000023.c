#include<stdio.h>


void main() {
    int X,A,B;
    scanf("%d %d %d", &X, &A, &B);
    if(A >= B) {
        printf("delicious\n");
    } else {
        if(A+X >= B) {
            printf("safe\n");
        } else {
            printf("dangerous\n");
        }
    }

}
