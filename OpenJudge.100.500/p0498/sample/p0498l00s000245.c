#include <stdio.h>

int main(void)
{
    int N;
    float p;

    scanf("%d", &N);

    p = N/2.0;

    if(p > N/2) {
        printf("%d\n", (N/2)+1);
    } else {
        printf("%d\n", N/2);
    }

    
    return 0;
}