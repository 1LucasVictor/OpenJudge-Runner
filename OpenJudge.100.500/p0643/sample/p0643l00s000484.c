#include<stdio.h>
int main()
{
    int a, b, mask=1;

    // line 1
    scanf("%d %d", &a, &b);
    // output
    if (a & mask && b & mask) {
        printf("Odd\n");
    }else{
        printf("Even\n");
    }
    return 0;
}