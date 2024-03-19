#include <stdio.h>
#include <stdlib.h>

int a[100000];

int main()
{
    long int i,h,n,s=0;
    scanf("%ld %ld",&h,&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
        s = s+a[i];
    }
    if(s >= h)
        printf("Yes");
    else
        printf("No");
    return 0;
}