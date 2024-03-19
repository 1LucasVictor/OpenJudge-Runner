#include <stdio.h>
#include <stdlib.h>
#define repeat(a, n) for (int i = a; i < n;i++)
int main()
{
    int n,m,k,j=0,l=0,c=0,d=0;
    scanf("%d %d %d", &n,&m,&k);
    int a[n], b[m];
    repeat(0, n) scanf("%d", &a[i]);
    repeat(0, m) scanf("%d", &b[i]);
    while(j<n,l<m){
        c += a[j] + b[l];
        d += 2;
        if (c==k){
            printf("%d", d);
            break;
        }
        if (c>k)
        {
            printf("%d", d - 1);
            break;
        }
        j++;
        k++;
    }
}