#include <stdio.h>

int main(void)
{
    int n;
    int a;
    int b;

    scanf("%d %d %d", &n, &a, &b);

    if(a * n < b){
        printf("%d", a * n);
    }

    else if(a * n > b){
        printf("%d", b);
    }

    return 0;
}