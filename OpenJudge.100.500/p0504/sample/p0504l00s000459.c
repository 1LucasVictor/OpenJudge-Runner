#include <stdio.h>
#include <math.h>

int main() {
    double H, A;
    scanf("%lf %lf", &H, &A);
    printf("%d\n", (int)(ceil(H/A)));
    return 0;
}