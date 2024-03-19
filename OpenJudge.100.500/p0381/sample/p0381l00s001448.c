#include <stdio.h>

int main(void){
    int n, x;
    int i, j, k;
    int c;

    while(1){
        scanf("%d %d", &n, &x);
        if(n == 0 && x == 0)
            break;
        c = 0;
        for(i = 1; i <= n; i++){
            for(j = 1; j < i; j++){
                for(k = 1; k < j; k++){
                    if(i == j && j == k) continue;
                    if(i + j + k == x)
                        c++;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}