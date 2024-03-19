
#include <stdio.h>

int main(){
    long int X, A, B;

    scanf("%ld %ld %d", &X, &A, &B);

    if(A >= B)
        printf("delicious\n");
    else if((B-A) <= X)
        printf("safe\n");
    else
        printf("dangerous\n");

    return 0;
}