#include <stdio.h>

int main(){
    int i, j, k, n, a[10000], max, sum;
    
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        for (i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        max = a[0];
        for (j = 0; j < n; j++){
            sum = 0;
            for (k = j; k < n; k++){
                sum += a[k];
                if(sum > max) max = sum;
            }
        }
        printf("%d\n", max);
    }
    
    return 0;
}