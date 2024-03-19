#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define ll long long int
int main()
{
    int A , B , T;
    scanf("%d %d %d",&A,&B,&T);
    int div = T / A;

    printf("%d",div*B);

    return 0;
}
