#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {


    int x;
    scanf("%d", &x);

    int mysum = 0;

    int num1 = x / 500;
    x -= num1 * 500;
    mysum += num1 * 1000;
    int num2 = x / 5;
    mysum += num2 * 5;

    printf("%d", mysum);


    return 0;

}
