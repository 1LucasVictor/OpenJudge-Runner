#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5],i,k,temp,j,min,g;
    for (i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=arr[5];
    for (j=0 ; j<6 ; j++)
    {
        min=arr[j];
        g=j;
        for (i=j;i<6;i++)
    {
        if(arr[i]< min)
        {
            min=arr[i];
            g=i;
        }
        temp=arr[j];
        arr[j]=arr[g];
        arr[g]=temp;
    }
    }
    if ((arr[5]-arr[0])<k)
        printf("Yay!");
    else
        printf(":(");
    return 0;
}
