#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    int seconds[100]={};
    int a, b, c, d;
    int i;
    int ans;
    ans = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (i = a; i < b; i++){
        seconds[i] += 1;
    }
    for (i = c; i < d; i++){
        seconds[i] += 1;
    }

    for (i = 0; i < 100; i++){
        if (seconds[i] == 2){
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}