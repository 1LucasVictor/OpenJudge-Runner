#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long
const int MOD = 1000000007;

int main()
{
    int a[6] = { 0 }, b[3] = { 10,10,10 };
    int m = 0, n = 0,i = 0,num = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a[i],&num);
        if (num < b[a[i]-1])
        {
            b[a[i]-1] = num;
        }
    }
    if (b[0] == 0 || b[0] == 10)
    {
        printf("-1\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (b[i] != 10)
                printf("%d", b[i]);
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}
