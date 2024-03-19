#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char A[4];
    scanf("%s", A);
    if (A[1] == 'B')
    {
        printf("ARC");
        return 0;
    }
    printf("ABC");
    return 0;
}