#include <stdio.h>
#include <limits.h>
 
int main()
{
    int i, n, a;
    int min=INT_MAX, max=INT_MIN;
    long long sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a);
        if(a<min) min=a;
        if(max<a) max=a;
        sum+=a;
    }
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}