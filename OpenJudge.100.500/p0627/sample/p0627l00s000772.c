# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int A, B;
    int add, sub, mul;
    int ans;

    scanf("%d%d", &A, &B);
    add = A + B;
    sub = A - B;
    mul = A * B;

    ans = add;
    if (sub > ans){
        ans = sub;
    }
    if (mul > ans){
        ans = mul;
    }

    printf("%d", ans);

    return 0;
}
