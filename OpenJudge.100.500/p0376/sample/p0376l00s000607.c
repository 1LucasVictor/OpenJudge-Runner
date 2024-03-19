#include <stdio.h>

int     main(void)
{
    int i, j;
    
    scanf("%d", &i);
    
    int num[i];
    
    j = 0;
    while (j < i)
    {
        scanf("%d", &num[j]);
        j++;
    }
    
    while(j - 1 >= 0)
    {
        printf("%d", num[j -1]);
        j--;
        if (num[j - 1])
            printf(" ");
    }
    printf("\n");
    return (0);
}
