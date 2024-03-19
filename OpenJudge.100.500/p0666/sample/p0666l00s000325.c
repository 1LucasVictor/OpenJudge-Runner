#include<stdio.h>


void main() {
    int X,A,B;
    scanf("%d %d %d", &X, &A, &B);
    if(A >= B) {
        printf("delicious");
    } else {
        if(A+X >= B) {
            printf("safe");
        } else {
            printf("dangerous");
        }
    }

}
