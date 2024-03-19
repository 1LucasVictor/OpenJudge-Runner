#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isprime(long x)
{
    long i;

    if (x==2)
        return 1;
    if (!(x & 1))
        return 0;
    if (x==1)
        return 0;
    for (i=3; i<=10000000; i+=2){
        if (x % i == 0)
            return 1;
    }
}
int main(void)
{
    int i,n,sum; long *Array;

    scanf("%d", &n);
    Array=malloc(sizeof(long)*n);
    for (i=0; i<n; i++)
        scanf("%ld", &Array[i]);
    for (i=sum=0; i<n; i++){
        if (isprime(Array[i]))
            sum++;
    }
    printf("%d\n", sum);
    return 0;
}