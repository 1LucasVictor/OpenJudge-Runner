#include <stdio.h>

int main() {
    
    int n, i, j, k, v;
    int a[100];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
        scanf("%d ", &a[i]);
    
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    
    for(i = 1; i < n; i++){
        v = a[i];
        j = i - 1;
        while(j >= 0 && v < a[j]){
            a[j+1] = a[j];
            --j;
        }
        a[j + 1] = v;
        for(k = 0; k < n; k++)
            printf("%d ", a[k]);
        printf("\n");
    }
}