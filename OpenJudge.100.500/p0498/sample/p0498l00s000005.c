#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define ll long long int

int main(void)
{
 int N;
 scanf("%d",&N);
 int div =  N/2;
 int remain =  N%2;
 printf("%d",div+remain);
    return EXIT_SUCCESS;
}
