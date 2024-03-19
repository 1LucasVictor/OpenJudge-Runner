#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {

    int arr[5];
    int k;
    scanf("%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &k);

    if (arr[4] - arr[0] <= k) {
        puts("Yay!");
    } else {
        puts(":(");
    }

    return 0;

}
