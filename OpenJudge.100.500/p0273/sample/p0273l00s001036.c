#include<stdio.h>


int main(void)
{
    int F[100], n, x;
    x = 0;
    F[0] = 0;
    F[1] = 1;
    
    for (n = 2; n < 46; n++){
        F[n] = F[n-2] + F[n-1];
    }
    scanf("%d", &n);
    printf("%d\n", F[n+1]);
    
    return 0;
}
