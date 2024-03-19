// AOJ Volume 0 Problem 0006

#include <stdio.h>

int main(void)
{
    int debt;
    int weeks;
    int i;
    
    scanf("%d", &weeks);
    
    debt = 100000;
    for (i = 0; i < weeks; i++){
        debt += (debt / 20);
        debt = (debt + 999) / 1000 * 1000;
    }
    
    printf("%d\n", debt);

    return (0);
}