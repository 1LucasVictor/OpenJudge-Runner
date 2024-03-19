#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE], reverse[MAX_SIZE];
    int size, i, arrIndex, revIndex;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    revIndex = 0;
    arrIndex = size - 1;
    while(arrIndex >= 0)
    {
        reverse[revIndex] = arr[arrIndex];

        revIndex++;
        arrIndex--;
    }
    for(i=0; i<size; i++)
    {
        if(i==size-1)
        printf("%d",reverse[i]);
        else
            printf("%d ",reverse[i]);
    }
    printf("\n");

    return 0;
}


