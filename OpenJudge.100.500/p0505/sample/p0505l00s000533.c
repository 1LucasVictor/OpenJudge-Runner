#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long int n,h,m=0,i;
    scanf("%ld %ld",&h,&n);
    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        m+=a[i];
    }
    if(m>=h)
        printf("Yes");
    else
        printf("No");
    return 0;
}
