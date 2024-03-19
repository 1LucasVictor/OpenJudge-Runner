#include <stdio.h>

int main(void)
{
    int n, x, i;

    while(1){
        scanf("%d %d", &n, &x);
        if(n == 0 && x == 0){
            break;
        }
        int narray[n];
        for(i = 1; i <= n; i++){
            narray[i - 1] = i;
        }

        int j, k, sum, count = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                for(k = 0; k < n; k++){
                    sum = narray[i] + narray[j] + narray[k];
                    if(sum == x && narray[i] != narray[j] && narray[j] != narray[k] && narray[k] != narray[i]){
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count / 6);
    }

    return 0;
}
