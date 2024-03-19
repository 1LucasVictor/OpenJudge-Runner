#include<stdio.h>
int main()
{
    long long int n, i, j=1, a=1;
    scanf("%lld", &n);
    int arr[n-1];

    for(i=0; i<n-1; i++)
        {
            scanf("%d", &arr[i]);
        }


    while(a<=n)
    {
        long long int count = 0;
        for(j=0; j<n-1; j++)
        {
            if(a == arr[j])
            {
                count++;
            }
        }
        printf("%lld\n", count);

        a++;
    }


    return 0;
}
