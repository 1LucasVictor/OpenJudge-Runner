#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int p[10000];

int main(void)
{
    int i, j, k;
    int n, x, cnt = 0;

    for (i = 0; i <= 10000; i++){
        p[i] = 1;
    }

    p[0] = p[1] = 0;
    for (i = 2; i * i < 10000; i++){
        if (p[i] == 1){
            for (j = i * i; j < 10000; j += i){
                p[j] = 0;
             }
         }
     }

     scanf("%d", &n);
     for (k = 0; k < n; k++){
         scanf("%d", &x);
         if (p[x] == 1){
             cnt++;
         }
     }
     printf("%d\n", cnt);

    return (0);
}