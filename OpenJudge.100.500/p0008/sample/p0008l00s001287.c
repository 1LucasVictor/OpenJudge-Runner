#include <stdio.h>
 
int prime[100000];
 
int main(void)
{
    int n;
    int i, j;
    int len;
     
    prime[0] = 2;
    prime[1] = 3;
    len = 2;
    while (scanf("%d", &n) != EOF){
        if (prime[len - 1] <= n){
            for (i = prime[len - 1] + 2; i <= n; i += 2){
                for (j = 0; prime[j] <= i / 2; j++){
                    if (i % prime[j] == 0){
                        break;
                    }
                }
                if (prime[j] > i / 2){
                    prime[len] = i;
                    len++;
                }
            }
        }
        for (i = 0; prime[i] != 0 && prime[i] <= n; i++){
            ;
        }
        printf("%d\n", i);
    }
     
    return 0;
}