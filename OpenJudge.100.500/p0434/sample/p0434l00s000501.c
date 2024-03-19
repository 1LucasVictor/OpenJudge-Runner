#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define fr(i,n,m) for(ll i=n;i<m;i++)
int main()
{
    int x;
    scanf("%d",&x);
    if (x < 30) {
        printf("No");
    } else {
        printf("Yes");
    }
    return 0;
}