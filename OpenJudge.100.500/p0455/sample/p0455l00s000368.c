#include<stdio.h>
#include<math.h>

int main(void)
{
    long a;

    scanf("%ld", &a);

    printf("%ld\n", a+a*a+a*a*a);

    return 0;
}