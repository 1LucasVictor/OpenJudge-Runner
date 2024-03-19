#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    if((B-1)%(A-1) == 0){
        printf("%d\n", (B-1)/(A-1));
    } else {
        printf("%d\n", (B-1)/(A-1)+1);
    }
    return 0;
}
