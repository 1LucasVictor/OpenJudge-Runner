#include<stdio.h>
#include<math.h>

int main() {
    double res, H, A;
    scanf("%lf %lf", &H, &A);
    res = ceil(H / A);

    printf("%d", (int)(res));

}