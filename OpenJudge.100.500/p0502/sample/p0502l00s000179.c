#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int flag =0;

    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }



    for(i=0;i<n;i++)
    {
        if(arr[i]%2 == 0 && arr[i]%3 != 0 && arr[i]%5 != 0)
        {
            flag = 1;
            break;

        }
    }

    if(flag == 0)
        printf("APPROVED\n");
    else if(flag == 1)
        printf("DENIED\n");

    return 0;
}





