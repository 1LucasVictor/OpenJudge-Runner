#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int A, B, T;
    
    scanf("%d %d %d", &A, &B, &T);
    printf("%d\n", (T/A)*B);
    return 0;
}