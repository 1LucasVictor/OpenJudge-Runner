#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int A;
    int B;
    int C;
    int X;

    if (scanf("%d %d %d", &A, &B, &X) < 3)
    {
        exit(1);
    }

    if (1 <= A && A <= 100 && 1 <= B && B <= 100 && 1 <= X && X <= 200)
    {

        C = A + B;
        
        if (X < A)
        {
            printf("NO\n");
        }
        else
        {
            if (X > C)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
    return 1;
}