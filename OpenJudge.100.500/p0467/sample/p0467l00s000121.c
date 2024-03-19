#include <stdio.h>

int main(void) {
    int a, b, c, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);

    int sum = 0;
    while(k != 0) {
        if(a != 0 && k != 0) {
            sum = sum + 1;
            a--;
            k--;
        }
        else if(b != 0 && k != 0) {
            b--;
            k--;
        }
        else if(c != 0 && k != 0) {
            sum = sum - 1;
            c--;
            k--;
        }
    }
    printf("%d\n", sum);
}