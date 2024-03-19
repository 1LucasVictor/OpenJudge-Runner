#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i;
    scanf("%d",&i);
    while (i > 0){

    if (i % 10 == 7)
    {
        printf("Yes");
        return (0);
    }
    else
        i /= 10;
    }
    printf("No");
    return (0);
}
