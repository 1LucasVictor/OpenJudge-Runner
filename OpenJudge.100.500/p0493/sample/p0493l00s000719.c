#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define rep(a, b) for(int a=0; a<b; ++a)

int main () {
    int x;
    scanf("%d", &x);
    int z = 0;
    z += (x / 500)*1000;
    x = (x%500);
    z += (x / 5)*5;
    printf("%d\n", z);
    return 0;
}
