// AOJ Volume 0 Problem 0008

#include <stdio.h>

int c;

void combination(int n, int depth)
{
    int i;
    
    if (n < 0){
        return;
    }
    if (depth == 1){
        if (n <= 9){
            c++;
        }
        return;
    }

    for (i = 0; i <= 9; i++){
        combination(n - i, depth - 1);
    }
}

int main(void)
{
    int n;

    while (scanf("%d", &n) != EOF){
        c = 0;
        combination(n, 4);
        printf("%d\n", c);
    }

    return (0);
}