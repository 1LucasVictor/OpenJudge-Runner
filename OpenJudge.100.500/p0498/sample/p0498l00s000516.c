#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, res;

    scanf("%d", &n);
    res = ceil((float)n/2);

    printf("%d", res);

	return 0;
}