#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define fr(i,n,m) for(ll i=n;i<m;i++)
int com(const void *a,const void *b) {
    return *(int*)a-*(int*)b;
}
int main()
{
    ll n,cen;
    scanf("%lli",&n);
    ll num[n];
    fr(i,0,n) {
        scanf("%lli",&num[i]);   
    }
    qsort(num,n,sizeof(ll),com);
    fr(i,0,n-1) {
        if(num[i] == num[i-1]) {
            cen = 1;
            break;
        }
    }
    if (cen == 1) {
        puts("NO");
    } else {
        puts("YES");
    }
    return 0;
}