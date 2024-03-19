#include <stdio.h>

int bubbleSort(int a[],int n)
{
    int count = 0;
    int i,j;
    int tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int a[100],n,count;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    count = bubbleSort(a,n);
    for(i=0;i<n;i++)
    {
        if(i)
        {
            printf(" ");
        }
        printf("%d",a[i]);
    }
    printf("\n");
    printf("%d\n",count);
}