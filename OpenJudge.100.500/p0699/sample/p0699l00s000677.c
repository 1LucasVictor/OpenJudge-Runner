#include <stdio.h>
int main(void){
    int A, B, C;
    scanf("%d %d %d",&A, &B, &C);

    if (A <= C && B <= C){
        if (A == 5 && B == 5 && C == 7){
            printf("%s", "YES");
        }
        else {
            printf("%s", "NO");
        }
    }
    else if (A <= B && C <= B){
        if (A == 5 && C == 5 && B == 7){
            printf("%s", "YES");
        }
        else {
            printf("%s", "NO");
        }
    }
    else if (B <= A && C <= A) {
        if (B == 5 && C == 5 && A == 7){
            printf("%s", "YES");
        }
        else {
            printf("%s", "NO");
        }
    }

    return 0;
}
