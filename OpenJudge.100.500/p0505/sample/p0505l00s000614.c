#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    long long int h, power = 0;
    int n;
    scanf("%lld%d", &h, &n);
    long long int a[n];
    for(int i = 0; i<n; i++) scanf("%lld", &a[i]);
    
    for(int i = 0; i<n; i++) power += a[i];

    if(power>=h) printf("Yes");
    else printf("No");

    return 0;    
}