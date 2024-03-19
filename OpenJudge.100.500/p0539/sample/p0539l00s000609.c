#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    int i,k;
    int seki;
    scanf("%d", &N);

    for (i = 1; i < 10; i++) {
        for (k = 1; k < 10; k++) {
            seki = i * k;
            if (seki == N){
                printf("Yes");
                return(0);
            }
        }
    }
    printf("No");
    return(-1);
}