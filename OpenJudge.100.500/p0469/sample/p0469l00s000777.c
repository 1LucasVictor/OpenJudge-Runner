#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int K;
    int A;
    int B;
    int temp;
    scanf("%d", &K);
    scanf("%d", &A);
    scanf("%d", &B);
    temp = A;
    while (1)
    {
        if (temp % K == 0)
        {
            printf("OK");
            return 0;
        }
        ++temp;
        if (temp > B)
        {
            printf("NG");
            return 0;
        }
    }
}