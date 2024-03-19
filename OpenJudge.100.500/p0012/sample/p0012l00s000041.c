#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int x;
    int train[101];
    int i = 0;

    while (scanf("%d", &x) != EOF){
        if (x == 0){
            train[i];
            i--;
            printf("%d\n", train[i]);
        }
        else {
            train[i] = x;
            i++;
        }
    }
    return (0);
}