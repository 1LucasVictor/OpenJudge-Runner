#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<=n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    if(count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
