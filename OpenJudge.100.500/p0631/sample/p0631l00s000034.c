#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
    int A = 0;
    int B = 0;
    int X = 0;
    int temp = 0;

    scanf("%d%d%d", &A, &B, &X);

    temp = A + B;
    if ((1 > A) || (100 < A) || (1 > B) || (100 < B) || (1 > X) || (200 < X)){
        printf("NO\n");
    }
    else if ((X <= temp) && (X >= A)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}