#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
int main(void)
{
    int i,n,cnt = 0;
    scanf("%d",&n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    
    qsort(a,n,sizeof(int),compare_int);
    
    for(i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i + 1])
        {
            cnt++;
            break;
        }
        
    }
    if(cnt == 1)
        printf("NO");
    else
        printf("YES");
        
    return 0;
}