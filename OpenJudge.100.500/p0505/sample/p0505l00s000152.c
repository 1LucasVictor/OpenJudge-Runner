#include<stdio.h>
int main()
{
    int H, N, sum=0, sum1=0, i,j;
    scanf("%d %d", &H, &N);
    int arr[N];

    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);

        sum = sum + arr[i];

    }


    if(sum>=H)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}