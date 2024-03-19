#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    scanf("%d %d", &A, &B);
    if (A <= 8 && B <= 8){
        printf("%s", "Yay!");
    }
    else{
        printf("%s", ":)");
    }
    return 0;
}