#include <stdio.h>

int main(void){
    int n, x;
    int sum;
    int j, q, k, a;
    
    while(1){
        a = 0;
        scanf(" %d %d", &n, &x);
        if(n == 0 && x == 0)
            break;
        for(j = 1; j <= n; j++){
            sum = 0;
            for(q = 1; q <= n; q++){
                if(q == j)
                    continue;
                for(k = 1; k <= n; k++){
                    if(k == j || k == q)
                        continue;
                    sum = j + q + k;
                    if(sum == x)
                        a += 1;
                }
            }
        }
        printf("%d\n", a / 6);
    }
    return 0;
}
