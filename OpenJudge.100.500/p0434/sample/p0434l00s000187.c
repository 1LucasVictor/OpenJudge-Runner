
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int x = 0;
    while (scanf("%d", &x) == 1) {
        if (x >= 30) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}