#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int k;
    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    for(int i = 4; i >= 0; i--)
    {
        for(int j = i-1; j >= 0; j--)
        {
            if(a[i] - a[j] > k)
            {
                printf(":(");
                return 0;
            }
        }
    }
    printf("Yay!");
    return 0;
}
