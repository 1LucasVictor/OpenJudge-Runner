#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
int main(void){
    int i, j, n, judge=0;
    scanf("%d", &n);
    int array[n];
    for (i=0; i < n; i++){
        scanf("%d", &array[i]);
    }
    qsort(array, n, sizeof(int), compare_int);
    for (i=0;i<n-1;i++){
        if (array[i]==array[i+1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}