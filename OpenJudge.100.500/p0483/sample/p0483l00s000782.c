#include <math.h>
#include <stdio.h>
#include <string.h>
int n;
int main(void) {
    scanf("%d", &n);
    if (n / 100 == 7) {
        printf("Yes\n");
    } else if ((n % 100) / 10 == 7) {
        printf("Yes\n");
    } else if (n % 10 == 7) {
        printf("Yes\n");

    } else {
        printf("No\n");
    }
}