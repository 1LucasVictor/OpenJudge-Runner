#include <stdio.h>

int main()
{   long long int H,N,sum;
    scanf("%lld %lld",&H,&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
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
