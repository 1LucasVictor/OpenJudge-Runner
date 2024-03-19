#include <stdio.h>
#include <string.h>

int main ()
{
    int H, N, i, ans=0;
    scanf("%d %d", &H, &N);
    int arr[N], sum=0;

    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<N; i++)
    {
        sum+=arr[i];
        if(sum>=H)
            ans=1;
    }

    switch(ans)
    {
        case 1: printf("Yes"); break;
        case 0: printf("No"); break;
    }
    return 0;
}
