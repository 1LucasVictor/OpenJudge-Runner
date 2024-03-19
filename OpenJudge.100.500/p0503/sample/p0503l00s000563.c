#include <stdio.h>
#include <stdlib.h>

int ddd(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main () 
{
int n,i,j;
int a[200010];

scanf("%d",&n);


for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

qsort(a, n, sizeof(int), ddd);

for(i=0;i<n;i++)
{
    if(a[i]==a[i+1])
    {
        printf("NO");
        return 0;
    }
}

printf("YES");
return 0;
}
