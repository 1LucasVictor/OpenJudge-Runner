#include <stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (j = n-1; j >= 0; j--){
        (j != 0) ? printf("%d ", a[j]) : printf("%d", a[j]);
    }
    printf("\n");
    return 0;
}