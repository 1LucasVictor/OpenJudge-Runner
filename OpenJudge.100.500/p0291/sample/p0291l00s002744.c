#include<stdio.h>
 
#define MAX 200000
 
int main()
{
    long n,i,maxP=-20000000000;
    long a[MAX];
    long x,k;
    scanf("%ld", &n);
    for(i=0;i<n;i++)
        scanf("%ld", &a[i]);
    for(i=1;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            x = a[i] - a[k];
            if(x>maxP)
                maxP = x;
        }
    }
    printf("%ld\n", maxP);
    return 0;
}