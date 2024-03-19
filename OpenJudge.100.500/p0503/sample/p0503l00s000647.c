#include<stdio.h>
#include<string.h>
int main()
{
    long n,flag=1;
    scanf("%ld",&n);
    long a[n];
    for(long i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(long i=0;i<n-1;i++)
    {
        for(long j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}