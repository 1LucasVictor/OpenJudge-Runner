#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main()
{
    int n,a[200000],i,j;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),asc);

    for (i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i + 1])break;
    }
    if(i == n - 1)printf("YES");
    else printf("NO");
}
