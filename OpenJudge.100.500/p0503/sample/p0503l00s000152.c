#include <stdio.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
 
int main(void)
{
    int i, n, a[200001];
    
    scanf("%d", &n);
    
    for( i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }
    
    qsort(a, n, sizeof(int), compare_int);
    
    for( i = 0; i < n-1; i++ ){
        if( a[i] == a[i+1] ){
            printf("NO\n");
            
            return 0;
        }
    }
    
    printf("YES\n");
    return 0;
}