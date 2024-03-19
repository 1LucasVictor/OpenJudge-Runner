#include<stdio.h>
int main(void){
    int n, target, i, j, k, count=0;
    while(1){
        scanf("%d %d", &n, &target);
        if(n == 0 && target == 0) break;
        for(i = 1; i <= n; i++){
            for(j = i+1; j<=n  ; j++){
                for(k = j+1;k<=n ;k++){
                    if(i+j+k == target) count++;
                }
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}