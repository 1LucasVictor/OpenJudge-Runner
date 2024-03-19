#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int A, B, X;
    scanf("%d %d %d", &A, &B, &X);
    if(X <= A + B)
        printf("YES\n");
    else
        printf("NO\n");
}

