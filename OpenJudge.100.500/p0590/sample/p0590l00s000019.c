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
    for(j=0;j<6;j++)
    {
        for(i=j;i<6;i++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if ((arr[5]-arr[0])<k)
        printf("Yay!");
    else
        printf(":(");
    return 0;
}
