#include<stdio.h>
int main()
{
    int i, n, arr[105], a[50];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        a[i]=0;
    }
    for(i=0; i<n-1; i++)
    {
        scanf("%d", &arr[i]);
        a[arr[i]-1]++;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}