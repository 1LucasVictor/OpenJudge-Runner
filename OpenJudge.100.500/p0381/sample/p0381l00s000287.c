#include <stdio.h>

int main()
{
    int n[100], x[100];
    int i, j, k, l;
    int cnt[100];

    for(l = 0; l < 100; l++){
        scanf("%d %d", &n[l], &x[l]);
        if(n[l] == 0 && x[l] == 0){
            break;
        }
    }

    for(l = 0; l < 100; l++){
        cnt[l] = 0;
        if(n[l] == 0 && x[l] == 0){
            break;
        }else if(n[l] >= 3 && n[l] <= 100){
            for(i = 1; i <= n[l] - 2; i++){
                for(j = i + 1; j <= n[l]; j++){
                    for(k = j + 1; k <= n[l]; k++){
                        if(i + j + k == x[l]){
                                cnt[l]++;
                        }
                    }
                }
            }
        }
        printf("%d\n", cnt[l]);
    }

    return 0;
}