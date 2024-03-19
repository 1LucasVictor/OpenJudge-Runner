#include<stdio.h>
int main()
{
    int H, N, sum=0, i,j;
    scanf("%d %d", &H, &N);
    int arr[N];

    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
        //sum = sum + arr[i];
    }

    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(arr[i] == arr[j])
            {
                continue;
            }
            else
            {
                sum = sum + arr[i];
            }
        }
    }


    if(sum>H)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}
