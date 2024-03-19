#include <stdio.h>

int main(void)
{
    int A,B,kuti_count=1, tap_count=0;

    scanf("%d %d",&A, &B);

    while(kuti_count < B){
        kuti_count += A-1;
        tap_count++;
    }

    printf("%d\n",tap_count);

    return 0;
}