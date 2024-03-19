#include <stdio.h>
#include <math.h>

int main (void) {
    int gold = 0;
    int five_h, five = 0;
    int result = 0;
    
    scanf("%d", &gold);

    five_h = gold / 500;
    
    if (gold % 500 != 0) {
        five = (gold % 500) / 5;
    }

    result = five_h * 1000 + five * 5;
    printf("%d\n", result);

    return 0;
}
