#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6],i,k=0;
    for (i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
        getchar();
        if(arr[i]<arr[i+1])
            k++;
    }
    if (k<6)
        printf("Yay!");
    else
        printf(":(");
    return 0;
}
