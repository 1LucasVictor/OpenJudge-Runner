#include<stdio.h>
int main()
{
    long int i, n, arr[100005], a[100005];
    scanf("%ld", &n);
    for(i=0; i<n; i++)
    {
        a[i]=0;
    }
    for(i=0; i<n-1; i++)
    {
        scanf("%ld", &arr[i]);
        a[arr[i]-1]++;
    }
    for(i=0; i<n; i++)
    {
        printf("%ld\n", a[i]);
    }
    return 0;
}