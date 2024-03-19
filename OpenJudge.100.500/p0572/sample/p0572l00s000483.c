#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int l, r;
    int width;
    int min = 2019;

    scanf("%d %d", &l, &r);
    width = r - l;
    r %= 2019;
    l %= 2019;
    if (l +width >= 2019) printf("0");
    else {
        for (int i = l; i < r; i++) {
            for (int j = i+1; j <= r; j++) {
                if (min > i* j % 2019)min = i * j % 2019;
            }
        }
        printf("%d", min);
    }   
    return 0;
}