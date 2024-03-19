#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5],i,k,temp,j;
    for (i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=arr[5];
    int min=arr[0];
    for(i=0;i<6;i++)
    {
            if(arr[i]<min)
            {
                min=arr[i];
            }
    }
    int max=arr[0];
    for(i=0;i<6;i++)
    {
            if(arr[i]>max)
            {
                max=arr[i];
            }
    }
    if ((max-min)<k)
        printf("Yay!");
    else
        printf(":(");
    return 0;
}