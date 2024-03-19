#include <stdio.h>

int main(void) {
    int n, i, j, max = -10000000;
    int price[100000];
    scanf("%d",&n);
    for(i = 0; i < n; i++ ) {
        scanf("%d",&price[i]);
    }
    for(i = 0; i < n; i++ ) {
        for(j = i, j++; j < n; j++) {
            if(max < price[j] - price[i]) {
                max = price[j] - price[i];
            }
        }
    }
    printf("%d\n",max);
    return 0;
}