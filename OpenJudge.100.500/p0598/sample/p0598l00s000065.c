#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define ll long long
int main()
{
    int A , B;
    scanf("%d %d",&A,&B);
    if (A%B)printf("%d",A+B);
    else printf("%d",B-A);
    return 0;
}
