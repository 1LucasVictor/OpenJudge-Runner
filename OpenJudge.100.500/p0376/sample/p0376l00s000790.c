#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int n, array[100] = {0},i;
    
    scanf("%d",&n);
    
    for (i = 0;i < n; i++) {
        scanf("%d",&array[i]);
    }
    
    for (i = n-1; i >= 1; i--) {
        printf("%d ",array[i]);
    }

    printf("%d",array[0]);
    printf("\n");
    return 0;
}