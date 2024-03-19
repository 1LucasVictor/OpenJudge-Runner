#include <stdio.h>
int main(void)
{
    int n, i; 
    int a[1000]; 

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = n - 1; i >= 1; i--){
        printf("%d ", a[i]);
    }
    printf("%d", a[0]);
    
    printf("\n");

    return 0;
}
