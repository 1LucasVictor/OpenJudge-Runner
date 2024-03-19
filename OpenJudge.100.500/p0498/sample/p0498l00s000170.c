#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* code */
    int N;
    scanf("%d", &N);
    int result = 0;
    if(N % 2 == 0)
    {
        result = N / 2;
    }
    else
    {
        result = N / 2 + 1;
    }
    printf("%d", result);
    return (0);
}