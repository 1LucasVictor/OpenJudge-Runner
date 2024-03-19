#include <stdio.h>
#define rep(i) for ((i) = 0;;(i)++)


int main(void) {
    char x[1001]; 
    int sum, i, k;
    while (1) {
        scanf("%s", x);
        if (x[0] == '0') break;
        sum = 0;
        rep(i) {
            if (x[i] == 0) break;
            sum += (x[i] - '0');
        }
        printf("%d\n", sum);
    }
    return 0;
}
