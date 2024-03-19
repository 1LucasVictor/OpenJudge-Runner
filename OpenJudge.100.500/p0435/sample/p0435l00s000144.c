
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
    int x = 0;
    int y = 0;
    int n = 0;
    int d = 0;
    scanf("%d %d", &n, &d);
    int count = 0;
    int number = 0;
    while (count < n && scanf("%d %d", &x, &y) == 2) {
        int x_s = x * x; 
        int y_s = y * y;
        double root = sqrt(x_s + y_s);
        if (root <= d) {
            number++;
        }
        count++;
    }
    printf("%d\n", number);
    return 0;
}