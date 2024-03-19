#include <stdio.h>

int main(void) {
    int a, b, c, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);

    int sum = 0, K[k];
    for(int j = 0; j < k; j++) {
        K[j] = j;
        if(K[j] < a) {
            sum = sum + 1;
        }
        else if(K[j] < b) {
            sum = sum + 0;
        }
        else if(K[j] < c) {
            sum = sum - 1;
        }
    }
    printf("%d\n", sum);
}