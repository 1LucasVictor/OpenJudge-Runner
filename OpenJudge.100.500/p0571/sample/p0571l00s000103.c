#include <stdio.h>

int main(void)
{
    int n, a, b;
    int  train;

    scanf("%d %d %d", &n, &a, &b);

    train = n*a;

    if(b > train){
        printf("%d", train);
    }else{
        printf("%d", b);
    }

    return 0;
}