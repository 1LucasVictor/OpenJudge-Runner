#include <stdio.h>

int main(void) {
    int a, b, c, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);

    int sum = 0;
    for(int j = 0; j < k; j++) {
        if(j < a) {
            sum = sum + 1;
        }
        else if(j < b) {
            sum = sum + 0;
        }
        else if(j < c) {
            sum = sum - 1;
        }
    }
    printf("%d\n", sum);
}