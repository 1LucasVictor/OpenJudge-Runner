#include <stdio.h>
#include <stdlib.h>

long int a[10000];

int main()
{
    long int i,h,n;
    scanf("%ld %ld",&h,&n);
    for(i = 0;i < n;i++)
        scanf("%ld",&a[i]);
    i = 0;
    while(h > 0)
    {
        h = h-a[i];
        i++;
    }
    if(i <= n)
        printf("Yes");
    else
        printf("No");
    return 0;
}