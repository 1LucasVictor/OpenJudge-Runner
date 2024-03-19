#include<stdio.h>

#define MAXN 200005

long long buf[MAXN];

void merge_sort(long long *a, long long size)
{
    static long long i, j, k;
    if(size <= 1)
        return;
    merge_sort(a, size >> 1);
    merge_sort(a + (size >> 1), size - (size >> 1));

    for(i = 0, j = (size >> 1), k = 0; i < (size >> 1) && j < size;)
    {
        if(a[j] < a[i])
            buf[k++] = a[j++];
        else
            buf[k++] = a[i++];
    }
    while(i < (size >> 1))
        buf[k++] = a[i++];

    for(i = 0; i < k; i++)
        a[i] = buf[i];
}


int main()
{
    long long i, N, a[MAXN];
    scanf("%lld", &N);
    for(i = 0; i < N; i++)
      scanf("%lld", a + i);
    merge_sort(a, N);
    for(i = 0; i < (N - 1); i++)
      if(a[i] == a[i + 1])
        break;
    printf("%s\n", i == (N - 1) ? "YES" : "NO");
    return 0;
}