#include<stdio.h>

int main()
{
    int size,i,j,key,k;
    scanf("%d",&size);
    int arr[size+1];
    for(i=1;i<=size;i++)
                       scanf("%d",&arr[i]);
                       
    for(i=2;i<=size;i++)
    {
                       key = arr[i];
                       j = i-1;
                       for(k=1;k<=size;k++)
                       printf("%d ",arr[k]);
                       printf("\n"); 
                       while(j > 0 && arr[j] > key)
                       {
                                 arr[j+1] = arr[j];
                                 j=j-1;
                       }
                       arr[j+1] = key;                 
    }
    for(k=1;k<=size;k++)
    printf("%d ",arr[k]);
    return 0;
} 