#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a, result = 0;
    if(scanf("%d", &a) == EOF) {
        exit(1);
    }

    result = a + a*a + a*a*a;
    printf("%d", result);

    return 0;
}