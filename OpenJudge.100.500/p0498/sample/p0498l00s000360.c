#include <stdio.h>

int main(void)
{
    int N, out;

    scanf("%d",&N);

    if(N % 2)
        out = N/2 + 1;
    
    else
    {
        out = N/2;
    }
    
printf("%d",out);

    return 0;
}